#include<stdio.h>
void main()
{
   int a=0,b[4],c=99999999,d;
   for(a=0;a<=4;a++)
   {
       printf("Input number : ");
       scanf("%d",&b[a]);
       if(b[a]>d)
       {
           d=b[a];
       }
       if(b[a]<=c)
       {
           c=b[a];
       }

   }
   printf("Max is %d\n",d);
   printf("Min is %d",c);
}
