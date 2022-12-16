#include<stdio.h>
void ben();
int main()
{
    printf("HI!!!\n\n");
    ben();
    printf("\n\nEnd of the world everythings has been destory ");
}
void ben()
{
    int i;
    for(i=1;i<=12;i++)
    {
        printf("2 x %d = %d\n",i,i*2);
    }
}
