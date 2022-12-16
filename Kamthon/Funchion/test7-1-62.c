#include<stdio.h>
void sq(int a);
void main()
{
    int a;
    printf("Input number : ");
    scanf("%d",&a);
    sq(a);
}
void sq(int a)
{
    int i;
    for(i=1;i<=12;i++)
        printf("%d x %d = %d\n",a,i,a*i);
}
