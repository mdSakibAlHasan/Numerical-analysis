#include<stdio.h>

#define SIZE 1000
#define n 300

double x[SIZE],f[SIZE],df[SIZE], ff[SIZE],h;

void calculate_h(double a, double b)
{
    h = (b - a)/(double)n;

}


double function(double x)
{

    return (((x)*(x)*(x)) + 4 * ((x)*(x)) - 10);

}


double dif_function(double x)
{
    return ((3* (x)*(x)) +  ((x)*8) );

}





double fornt(int x2, int x1)
{
    return ((f[x2] - f[x1]) / h);

}


double back(int x1, int x0)
{
    return ((f[x1] - f[x0]) / h);

}


double cent(int x2, int x0)
{
    return ((f[x2] - f[x0]) / (2*h));

}

double abs1(double q){

    if(q <0){
        q *= -1;
    }

    return q;
}




int main()
{

    double a=0, b=10,temp;
    calculate_h(a,b);

    x[0] = a;
    f[0] = function(x[0]);
    
    for(int i=1;i<n;i++){
        x[i] = x[i-1] + h;
        f[i] = function(x[i]);
        
    }
    x[n] = b;
    f[n] = function(x[n]);
   

    //find df



    df[0] = fornt(1,0);
    ff[0] = dif_function(0);
    double max = abs1(df[0] - ff[0]);

    for(int i=1;i<n;i++){
        df[i] = cent(i+1,i-1);
        ff[i] = dif_function(x[i]);

	temp = abs1(df[i] - ff[i]);
	if(temp>max){
		max = temp;
	}
    }
    df[n] = fornt(n,n-1);
    ff[n] = dif_function(x[n]);

  	temp = abs1(df[n] - ff[n]);
	if(temp>max){
		max = temp;
	}




    printf("Maximun difference is %lf\n",max);


    return 0;
}
