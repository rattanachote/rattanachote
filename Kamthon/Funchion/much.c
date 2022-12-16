#include<stdio.h>
int sq(int a,int b);
void main()
{
    int a,b,c;
    printf("Input number : ");
    scanf("%d",&a);
    printf("Input number : ");
    scanf("%d",&b);
    c=sq(a,b);
    printf("Most number is %d",c);
}
int sq(int a,int b)
{
    if(a>b)
    return a;
    if(a<b)
    return b;
    if(a=b)
    return 0;
}
