#include<stdio.h>
void main()
{
    /*int a,c=0,d=0;
    while(a>0)
    {
        printf("Input number : ");
        scanf("%d",&a);
        if(a%2==0&&a>0)
            c++;
        if(a%2!=0&&a>0)
            d++;
    }
    printf("Even is %d\n",c);
    printf("Odd is %d",d);*/
    int a,b,i,j;
    printf("Input start : ");
    scanf("%d",&a);
    printf("Input stop : ");
    scanf("%d",&b);
        for(i=1;i<=12;i++)
        {
            for(j=a;j<=b;j++)
            {
                printf("%d x %d = %d\t",j,i,j*i);
            }
            printf("\n");
        }
}
