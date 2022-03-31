#include<stdio.h>
#include<stdlib.h>
#include<math.h>




double df(double x)
{
        return (3*(x)*(x) + 8*(x));
}


double function_value(double x)
{
    return ((x)*(x)*(x) + 4*(x)*(x) - 10.0);
}


double absolute(double x)
{
    if(x<0){
        x *= -1;
    }

    return x;

}


double find_value(double a)
{
	double x = function_value(a)/df(a);
	return (a-x);
}

int main()
{
    double a =1,c;
    int n=0;


    while(1){
        n++;
        c = find_value(a);
    //printf("%lf\t%lf\n",a,c);
        double p = absolute(function_value(c));
        if(p<=1e-9){
            break;
        }
        else{
            a = c;
        }

    }

    printf("Result: %.9lf \n Iterator: %d",c,n);

}


