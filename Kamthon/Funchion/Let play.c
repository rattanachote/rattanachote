#include<stdio.h>
double sq(double a);
void main()
{
    double  b;
    printf("Input side : ");
    scanf("%lf",&b);
    sq(b);
}
 double sq( double a)
{
    printf("Area is %lf ",a*a);
}
