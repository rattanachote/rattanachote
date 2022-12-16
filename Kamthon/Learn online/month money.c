#include<stdio.h>
#include<conio.h>
void main()
{
    float a,d[1000];
    int b,c;
    printf("Input how much salary : ");
    scanf("%f",&a);
    printf("Input how much years : ");
    scanf("%d",&b);
    for(c=1;c<=b-1;c++)
    {
        if(c>1)
        {
            d[c]=d[c-1]*107/100;
        }
        else
        {
            d[1]=a*107/100;
        }
    }
    printf("%.2f",d[b-1]);
    getch();
}
