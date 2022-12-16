/*#include<stdio.h>
void main()
{
    int a,i,j;
    printf("Input number : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(i==1||j==1||i==a||j==a)
                {
                    printf("*");
                }
        else
            printf(" ");
        }
        printf("\n");
    }
}*/
#include<stdio.h>
void main()
{
    int a,i,j;
    printf("Input number : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(i<=2||j<=2||i>=a-1||j>=a-1)
                {
                    printf("*");
                }
        else
            printf(" ");
        }
        printf("\n");
    }
}

