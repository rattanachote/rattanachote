#include<stdio.h>
int ar();
void main()
{
    int a,i;
    a=ar();
    for(i=1;i<=12;i++)
        printf("%d x %d = %d\n",a,i,a*i);

}
int ar()
{
    int b,i;
    printf("Input : ");
    scanf("%d",&b);
    return b;
}
