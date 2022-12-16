#include<stdio.h>
#include<conio.h>
void main()
{
    int a=1,b=1,c;
    printf("Input number : ");
    scanf("%d",&c);
    while(b<=c)
    {
        a=1;
        while(a<=b)
        {
            printf("%d",b);
            a++;
        }
        printf("\n");
        b++;
    }
    printf("!!!!!Please any key to exit!!!!!");
    getch();
        /*for(b=1;b<=4;b++)
    {
        for(a=1;a<=b;a++)
        {
            printf("%d",b);
        }

    }*/
}
