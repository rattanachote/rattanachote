#include<stdio.h>
float ar();
void main()
{
    float a;
    a=ar();
    printf("Average is %.2f ",a);
}
float ar()
{
    int a,i;
    float c=0;
    for(i=1;i<=6;i++)
    {
        printf("Input number %d : ",i);
        scanf("%d",&a);
        c=a+c;
    }
    return c/6;
}
