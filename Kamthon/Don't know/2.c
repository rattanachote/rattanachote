#include<stdio.h>
int main()
{
    char a[6];
    int b,c;
    for(b=0;b<6;b++)
    {
        printf("Input : ");
        scanf(" %c",&a[b]);
    }
    for(c=5;c>=0;c--)
    {
        printf("%c\n",a[c]);
    }
}
