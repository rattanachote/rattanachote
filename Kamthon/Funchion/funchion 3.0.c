#include<stdio.h>
int army();
void main()
{
    int b=0;
    b=army();
    printf("Area is : %d ",b);
}
int army()
{
    int a;
    printf("Input a : ");
    scanf("%d",&a);
    return 0.5*a*a;
}
