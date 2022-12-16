#include<stdio.h>
float a();
void main()
{
    float c;
    c=a();
    printf("Avg is %.2f",c);
}
float a()
{
    int a[6],i;
    float j;
    for(i=0;i<=5;i++)
    {
        printf("Input number : ");
        scanf("%d",&a[i]);
        j=j+a[i];
    }
    return j/6;
}
