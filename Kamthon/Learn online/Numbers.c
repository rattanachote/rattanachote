/*#include<stdio.h>
void main()
{
    int a,b=1,c[3];
    c[0]=0;
    c[1]=0;
    c[2]=0;
    while(b<=10)
    {
        scanf("%d",&a);
        if(a>0)
            c[0]++;
        if(a==0)
            c[1]++;
        if(a<0)
            c[2]++;
        b++;
    }
    printf("+++++ is %d\n",c[0]);
    printf("Zero is %d\n",c[1]);
    printf("----- is %d",c[2]);
}*/
/*#include<stdio.h>
void main()
{
    int a,i,b=0;
    printf("Input number : ");
    scanf("%d",&a);
    for(i=1;i<=a;i+=2)
    {
        b=b+i;
    }
    printf("%d",b);
}*/
/*#include<stdio.h>
void main()
{
    int a[3],i;
    for(i=0;i<=2;i++)
    {
        printf("Input : ");
        scanf("%d",&a[i]);
    }
    printf("Your numbers forward : \n");
    for(i=0;i<=2;i++)
    {
                printf("%d\n",a[i]);
    }
    printf("Your numbers reversed : \n");
        for(i=2;i>=0;i--)
    {
                printf("%d\n",a[i]);
    }
}*/
/*#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int b,c[20],d=0;
    printf("Input number : ");
    scanf("%s",a);
    for(b=0;b<=strlen(a-1);b++)
    {
            c[b]=0;
            if(a[b]==1)
            c[b]=1;
            else if(a[b]==2)
            c[b]=2;
            else if(a[b]==3)
            c[b]=3;
            else if(a[b]==4)
            c[b]=4;
            else if(a[b]==5)
            c[b]=5;
            else if(a[b]==6)
            c[b]=6;
            else if(a[b]==7)
            c[b]=7;
            else if(a[b]==8)
            c[b]=8;
            else if(a[b]==9)
            c[b]=9;
            else if(a[b]==0)
            c[b]=0;
        d=d+c[b];
    }
    printf("Sum is %d",d);
}*/
