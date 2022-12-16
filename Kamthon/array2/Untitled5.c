#include<stdio.h>
void main()
{
    int a[5][4]={{20,15,30,90},
                 {30,25,30,90},
                 {40,35,30,50},
                 {50,45,30,50},
                 {60,55,30,100} },b,c;
    printf("Thai\tEng\tMath\tScience\n");
    for(c=0;c<5;c++)
    {
        for(b=0;b<4;b++)
        {
            printf("%d\t",a[c][b]);
        }
        printf("\n");
    }
}
