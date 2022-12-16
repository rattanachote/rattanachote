include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d;
    printf("First number : ");
    scanf("%d",&a);
    printf("Second number : ");
    scanf("%d",&d);
    for(b=0;b<a;b++)
       {
            printf("*");
       }
       printf("\n");
    printf("-*---*\n--*-*\n---*\n");
     printf("--*-*\n-*---*\n");
        for(b=1;b<=d;b++)
       {
            printf("*");
       }
       getch();
}
