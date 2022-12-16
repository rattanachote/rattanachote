#include<stdio.h>
int sq(int a);
void main()
{
    int c,d,e;
    printf("Input width  : ");
    scanf("%d",&c);
    e=sq(c);
    printf("Area  square : %d ",e);
}
int sq(int a)
{
    return a*a;
}
