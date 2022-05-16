/*#include <stdio.h>
int main()
{
   int r,c,cen;
   scanf("%d",&cen);
    for(r=1; r<=cen; r++)
    {
        for(c=1; c<=(cen*2)-1; c++)
        {
            if( (c >= (cen - (r - 1))) && (c <= (cen + (r - 1))) )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}*/
/*#include <stdio.h>
int main()
{
   int cen;
   scanf("%d",&cen);
   if(cen%4 == 0)
   {
       if(cen%100!=0)
       {
           printf("%d is a leap year.",cen);
       }
       else
       {
           if(cen%400!=0)
            {
                printf("%d is not a leap year.",cen);
            }
            else
            {
                printf("%d is a leap year.",cen);
            }
       }

   }
   else
   {
       printf("%d is not a leap year.",cen);
   }*/
/*#include <stdio.h>
#include <string.h>
int main()
{
   int a,b;
   scanf("%d",&a);
   if(a/1000 > 0)
   {
       printf("1000 : %d\n",a/1000);
       a=a%1000;
   }
   if(a/500 > 0)
   {
       printf("500 : %d\n",a/500);
       a=a%500;
   }
   if(a/100 > 0)
   {
       printf("100 : %d\n",a/100);
       a=a%100;
   }
   if(a/50 > 0)
   {
       printf("50 : %d\n",a/50);
       a=a%50;
   }
   if(a/20 > 0)
   {
       printf("20 : %d\n",a/20);
       a=a%20;
   }
   if(a/10 > 0)
   {
       printf("10 : %d\n",a/10);
       a=a%10;
   }
   if(a/5>0)
   {
       printf("5 : %d\n",a/5);
       a=a%5;
   }
   if(a/1 > 0)
   {
       printf("1 : %d\n",a/1);
   }

}
#include <stdio.h>
#include <string.h>
int main()
{
   char cen[20];
   int b,j=0,k=0,l=0,n=0;
   scanf("%s",cen);
   b=strlen(cen);
   int a[b];
   if(b>=3 && b<=20)
   {
       for(int i=0;i<=b;i++)
       {
           a[i]=cen[i];
           if(a[i]>=65 && a[i]<=90)
           {
               j++;
           }
           if(a[i]>=97 && a[i]<=122)
           {
               k++;
           }
           if(a[i]>=0 && a[i]<=9)
           {
               l++;
           }
           if(a[i]==35 || a[i]==37 || a[i]==38 || a[i]==64)
           {
               n++;
           }
       }
       if(j>0 && k>0 && l>0 && n>0)
       {
           printf("Valid");
       }
       else
       {
            printf("Invalid");
       }

   }
   else
   {
       printf("Invalid");
   }

}
#include <stdio.h>
#include <string.h>
int main()
{
   char s[1005];
   int x=0,y=0,b;
   scanf("%s",s);
   b=strlen(s);
    for(int i=0;i<b;i++)
       {
           if(s[i]=='N')
           {
               y=y+1;
           }
           if(s[i]=='S')
           {
               y=y-1;
           }
           if(s[i]=='E')
           {
               x=x+1;
           }
           if(s[i]=='W')
           {
               x=x-1;
           }
           if(s[i]=='Z')
           {
               y=0;
               x=0;
           }
       }
    printf("%d %d",x,y);

}*/
/*#include<stdio.h>
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
}*/
/*#include <stdio.h>
#include <string.h>
int main()
{
   int a,j=0;
   scanf("%d",&a);
   if(a!=1)
   {
       for(int i=2;i<a;i++)
        {
            if(a%i==0)
                {

                    j++;
                    break;
                }
        }
   }
    if(j==0&&a!=1)
       {
           printf("prime");
       }
   else
   {
       printf("not prime");
   }
}*/
/*#include <stdio.h>
#include <string.h>
int main()
{
   char s[1005];
   int x=0,y=0,b;
   scanf("%s",s);
   b=strlen(s);
    for(int i=0;i<b;i++)
       {
            if(s[i]=='(')
            {
                x++;
            }

            if(s[i]==')')
            {
                y++;
            }

       }
    if(x==0 && y==0)
    {
         printf("NO");
    }
    else if(x==y)
    {
        printf("YES");
    }
    else if(x!=y)
    {
        printf("NO");
    }


}*/
#include<stdio.h>
int main()
{
    int q,r,s=0,u,l,o,tmp,j,i;
    scanf("%d",&q);
    for(int m=0;m<q;m++)
    {
        s=0;
        scanf("%d",&r);
        int t[r];
        for(l=0;l<r;l++)
        {
            scanf("%d",&t[l]);
        }
        i = 0;
    do
    {
        if(i < r-1 && t[i] > t[i+1])
        {
            tmp = t[i+1];
            t[i+1] = t[i];
            t[i] = tmp;
            i = 0;
        }
        else
        {
            i++;
        }

    }while(i < r);
        for(o=0;o<r;o++)
        {
            for(int h=0;h<r;h++)
            {
                if(t[o]==t[h]&& o!=h&&t[o]!=u)
                {
                    u = t[h];
                    t[h] = NULL;
                    t[o] = NULL;
                    s++;
                    o++;
                }
            }
        }
        printf("%d\n",s);
        j=0;
        for(int k=0;k<r;k++)
        {
            if(t[k]!= NULL)
            {
                printf("%d ",t[k]);
                j++;
            }

        }
        if(j==0)
            printf("Empty");
        printf("\n");
    }



}
