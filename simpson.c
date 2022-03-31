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

    h = (b-a)/n;

    double area = ((f(a) + f(b)));

    for(int i=1;i<200;i++){
        a += h;
        if(i%2 == 0){
            area += (2 * f(a));
        }
        else{
            area += (4 * f(a));
        }
    }

    area *= (h/3);

    printf("Area is %.9lf",area);   

}