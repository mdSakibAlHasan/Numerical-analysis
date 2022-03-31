#include<stdio.h>
#include<math.h>
#define n 200

double h;

double f(double x)
{
    double result =  ((x) * ( sin(x) ));


    return result;

}

int main()
{
    double a=0,b= (4 * M_PI),h;

    h = (b-a)/n;


    for(int i=0;i<200;i++){
        printf("%lf,%lf\n",a,f(a));

        a += h;

    }




    //printf("Area is %.9lf",area);

}

