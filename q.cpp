#include <cstdio>
int main()
{
   int r,c,cen;
   scanf("%d",&cen);
    for(r=1; r<=cen; r++)
    {
        for(c=1; c<=(cen*2)-1; c++)
        {
            if( (c >= (cen - (r - 1))) && (c <= (cen + (r - 1))) )
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
}

