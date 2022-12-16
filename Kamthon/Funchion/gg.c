#include<stdio.h>
int a(int a);
void main()
{
   int b,c;
    printf("Input number : ");
    scanf("%d",&b);
    c=a(b);
    printf("Summation of %d^3 = %d",b,c);
}
int a(int a)
{
    return (a*a)*a;
}
