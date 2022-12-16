#include<stdio.h>
void main()
{
    float s[10][3];
    int i,j;
    printf("Input score\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {

            scanf("%f",&s[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Score %3.2f\t",s[i][j]);
        }
        printf("\n");
    }
}
