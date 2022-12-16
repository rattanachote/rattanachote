/*#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Input number : ");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=k;j++)
        {
            if(i==1||j==1||i==k||j==k)
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
#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
