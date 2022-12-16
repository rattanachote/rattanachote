#include<stdio.h>
void p();
int main()
{
    p();
}
void p()
{
    float a,b=0,c;
    for(c=1;c<=6;c++)
    {
        printf("Input number : ");
        scanf("%f",&a);
        b=a+b;
    }
    printf("Avg is %.2f",b/6);
}
