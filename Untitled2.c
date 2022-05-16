/*#include <stdio.h>
int fib(int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fib(n));

}
int fib(int n)
{
    if(n==1 || n == 2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}*/
/*#include <stdio.h>
int main()
{
   int x=0,y=0,b[6],a[6],c[6];
    for(int i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
        scanf("%d",&c[i]);
    }
    for(int i=0;i<=2;i++)
    {
        printf("%d ",a[i]+a[i+3]);
        printf("%d ",b[i]+b[i+3]);
        printf("%d\n",c[i]+c[i+3]);
    }
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    int i,j[3];
    for(i=0;i<=2;i++)
    {
        scanf("%d",&j[i]);
    }
    if(j[0]==0)
        printf("%.2f",sqrt(pow(j[2],2)-pow(j[1],2)));
    if(j[1]==0)
        printf("%.2f",sqrt(pow(j[2],2)-pow(j[0],2)));
    if(j[2]==0)
        printf("%.2f",sqrt(pow(j[0],2)+pow(j[1],2)));

}*/
/*#include<stdio.h>
#include<limits.h>
#include<math.h>
int main()
{
    int i,j;
    scanf("%d",&j);
    int k[j],m=INT_MAX,l=INT_MIN;
    for(i=1; i<=j; i++)
    {
        scanf("%d",&k[i]);
        if(k[i]<m)
            m=k[i];
        if(k[i]>l)
            l=k[i];
    }
    printf("%d",l-m);


}*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j[1005],x,l=0;
    char s[1005];
    scanf("%d",&l);
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        j[i]=s[i];
        if(j[i]+l>122)
        {
            x=((j[i]+l)-122)+96;
            printf("%c",x);
        }
        else
            printf("%c",j[i]+l);
    }
}
