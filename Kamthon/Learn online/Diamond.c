#include<stdio.h>
#include<string.h>
void main()
{
    int l,m,i,j;
    char str[20];
    scanf("%s",str);
    l=strlen(str);
    m=l/2;
    for(i=0;i<=m-1;i++)//for i=0 to mid-1
    {
        for(j=m-i;j<=m+i;j++)//j=mid-i to mid+i
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    printf("%s\n",str);
   for(i=m-1;i>=0;i--)//i=mid-1 down to 0
   {
     for(j=m-i;j<=m+i;j++)//for j=mid-i to mid+i
     {
         printf("%c",str[j]);
     }
     printf("\n");
   }
}
