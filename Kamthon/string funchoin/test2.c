#include<stdio.h>
int main()
{
    int a[5],b[5],i,j=0,k;
    for(i=0;i<5;i++)
    {
        printf("INPUT NUM First group : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("INput num second group : ");
        scanf("%d",&b[i]);
    }
    j=a[0]+a[1]+a[2]+a[3]+a[4];
    k=b[0]+b[1]+b[2]+b[3]+b[4];
    if(j>k)
    {
        printf("j is %d",j);
    }
    if(k>j)
    {
        printf("k is %d",k);
    }
    else
    {
        printf("It draws");
    }
}
