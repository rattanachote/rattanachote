#include<stdio.h>
void p();
int main()
{
    p();
}
void p()
{
    float a,b,c;
    printf("Input radius : ");
    scanf("%f",&a);
    printf("Input height : ");
    scanf("%f",&b);
    c=(3.14*a)*(a*b);
    printf("Area is %.2f",c);

}
