#include<stdio.h>
void summation(int a,int b);
void main()
{
    int a,b;
    printf("Input number : ");
    scanf("%d",&a);
    printf("Input number : ");
    scanf("%d",&b);
    summation(a,b);
}
void summation(int a,int b)
{
    int sum;
    sum = a+b;
    printf("Summation is %d",sum);
}
