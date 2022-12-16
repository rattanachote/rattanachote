#include<stdio.h>
void sq(float a);
void main()
{
    float a;
    printf("Input redius : ");
    scanf("%f",&a);
    sq(a);
}
void sq(float a)
{
    float b;
    b=22/7.00*a*a;
    printf("Area is %.2-*f ",b);
}
