#include<stdio.h>
#define n 200

double h;

double f(double x)
{
    return (((x)*(x)) +1 );
}

int main()
{
    double a=0,b=1,h;

    h = (b-a)/(double)n;

    double area = ((f(a) + f(b)))/2;

    for(int i=1;i<200;i++){
        a += h;
        area += f(a);
    }

    area *= h;

    printf("Area is %.9lf",area);

    

}