#include <stdio.h>
#include <conio.h>
int main()
{
    int loop;
    int i;
    int j;
    printf("Input number : ");
    scanf("%d",&loop);
    for(i = 1; i <= loop; i++)
    {
        for(j = 1; j <= loop-i; j++ )
            {
                printf(" ");
            }

        for(j = 1; j <= i; j++)
            {
                printf("%d", j);
            }

        printf("\n");
    }

    for(i = 1; i <= loop; i++)
    {
        for(j = i; j >= 1 ; j-- )
            {
                printf(" ");
            }

        for(j = 1; j <= loop-i; j++)
            {
                printf("%d", j);
            }

        printf("\n");
    }
    getch();
}
