#include<stdio.h>
void sq(int x);
void  main()
{
    int x;
    scanf("%d",&x);
    sq(x);
}
void sq(int x)
{
    while(x>0)
    {
        printf("Hi\n");
        x--;
    }
}
