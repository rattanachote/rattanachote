#include<stdio.h>
double sq(double a,double c);
void main()
{
    double  b,d;
    printf("Input Long : ");
    scanf("%lf",&b);
    printf("Input Base : ");
    scanf("%lf",&d);
    sq(b,d);
}
 double sq( double a,double c)
{
    printf("Area is %lf ",(a*c)/2);
}
