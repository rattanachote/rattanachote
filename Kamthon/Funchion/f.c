#include<stdio.h>
float sq(float a);
void main()
{
    float a[5],b,c;
    int i;
    for(i=0;i<=5;i++)
    {
    printf("Input num : ");
    scanf("%f",&a[i]);
    b=b+a[i];
    }
    c=sq(b);
    printf("Sum is %.2f ",c);
}
float sq(float a)
{
    return a;
}
