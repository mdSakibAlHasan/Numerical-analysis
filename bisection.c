#include<stdio.h>

double function_value(double value)
{
    double x = (value*value*value) + 4*(value*value) - 10;

    return x;

}

double absolute(double x)
{
    if(x<0){
        x *= -1;
    }

    return x;

}

int main()
{
    double a =1, b=2, c;
    int n=0;
    printf("Itr,Root\n");
    while(1){
        n++;
        c = (a+b)/2;
        printf("%d,%lf\n",n,c);
        double p = absolute(function_value(c));
        if(p<=1e-9){
            break;
        }
        else if((function_value(a) * function_value(c))<0){
            b = c;
        }
        else{
            a = c;
        }

    }

   
}

