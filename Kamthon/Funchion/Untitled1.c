#include<stdio.h>
void p();
void main()
{
    p();
}
void p()
{
    int a[2];
    printf("Input Side : ");
    scanf("%d",&a[0]);
    a[1]=a[0]*a[0];
    printf("Area is : %d",a[1]);
}
