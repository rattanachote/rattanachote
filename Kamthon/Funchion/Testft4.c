#include<stdio.h>
int sq(int a,int b,int c);
void main()
{
    int a,b,c,d;
    printf("Input number : ");
    scanf("%d",&a);
    printf("Input number : ");
    scanf("%d",&b);
    printf("Input number : ");
    scanf("%d",&c);
    d=sq(a,b,c);
    printf("Summation is %d",d);
}
int sq(int a,int b,int c)
{
    int f,g,h;
    f=a*a;
    g=b*b;
    h=c*c;
    return f+g+h;
}
