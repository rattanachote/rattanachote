#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c[3][3];
    for(a=0;a<=2;a++)
    {
        for(b=0;b<=2;b++)
        {
            scanf("%d",&c[a][b]);
        }
    }
     for(a=0;a<=2;a++)
    {
        printf("\n--------------------------------");
        for(b=0;b<=2;b++)
        {
            printf("%d",c[a][b]);
        }
    }
}
