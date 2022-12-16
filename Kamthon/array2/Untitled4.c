#include<stdio.h>
void sub();
void main()
{
    sub();
}
void sub()
{
       int a[10][3],b,c,d=0;
    for(b=0;b<6
    ;b++)
    {
        for(c=0;c<2;c++)
        {
            printf("Please Input score No ");
         printf("%d  ",b+1);
         printf("Sub %d : ",c+1);
            scanf("%d",&a[b][c]);
        }
    }
    printf("\n\n");
    printf("=====================================\n");
    printf("Number\tSub1\tSub2\tTotal\tAvg\n");
    printf("=====================================\n");
    for(b=0;b<6;b++)
    {
        d=0;
        printf("%d\t",b+1);
        for(c=0;c<2;c++)
        {
           printf("%d\t",a[b][c]);
           d=d+a[b][c];
        }
        printf("%d",d);
        printf("\t%d",d/2);
        printf("\n");
    }
}
