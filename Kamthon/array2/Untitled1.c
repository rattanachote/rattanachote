#include<stdio.h>
void main()
{
    int a[4][2],b,c,d;
    for(b=0;b<4;b++)
    {
        for(c=0;c<2;c++)
        {
            a[b][c] = b+c;
            printf("Test Arr  %d\n",a[b][c]);
        }
    }
}
