#include<stdio.h>

double function_value(double value)
{
    double x = ((value*value*value) + 4*(value*value) - 10);

    return x;

}

double absolute(double x)
{
    if(x<0){
        x *= -1;
    }

    return x;

}


double find_value(double a, double b)
{
    double p,q,r;

    p = function_value(a);
    q = function_value(b);

    r = (((a * q) - (b * p))/(q - p));



    return r;
}

int main()
{
    double a =1, b=2, c;
    int n=0;


    while(1){
        n++;
        c = find_value(a,b);

       // printf("%lf ,%lf   %lf\n",a,b,c);
        double p = absolute(function_value(c));
        if(p<=1e-9){
            break;
        }
        else{
            a = b;
            b = c;
        }

    }

    printf("Result: %.9lf \n Iterator: %d\n",c,n);

}



