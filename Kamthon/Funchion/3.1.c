#include<Stdio.h>
int sq();
void main()
{
    int a;
    a=sq();
    printf("Area is    : %d",a);
}
int sq()
{
    int a;
    printf("Input side : ");
    scanf("%d",&a);
    return a*a;
}
