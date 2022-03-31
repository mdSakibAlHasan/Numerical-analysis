#include<stdio.h>

#define SIZE 1000
#define n 300

double p[SIZE],f[SIZE],df[SIZE], ff[SIZE],h;

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


double middle(int x2, int x0)
{
    return ((f[x2] - f[x0]) / (2*h));

}

double abs1(double q){

    if(q <0){
        q *= -1;
    }

    return q;
}


double fin_max()
{

    double max = 0,temp;

    for(int i=0;i<=n;i++){
        temp = abs1(df[i] - ff[i]);

        if(temp>max){
            max  = temp;
        }

    }

    return max;

}






int main()
{

    double a=0, b=10;
    calculate_h(a,b);

    p[0] = a;
    f[0] = function(p[0]);
    ff[0] = dif_function(0);
    for(int i=1;i<n;i++){
        p[i] = p[i-1] + h;
        f[i] = function(p[i]);
        ff[i] = dif_function(p[i]);
    }
    p[n] = b;
    f[n] = function(p[n]);
    ff[n] = dif_function(p[n]);

    //find df



    df[0] = fornt(1,0);
    for(int i=1;i<n;i++){
        df[i] = middle(i+1,i-1);
    }
    df[n] = fornt(n,n-1);




    printf("Maximun difference is %lf\n",fin_max());


    return 0;
}
