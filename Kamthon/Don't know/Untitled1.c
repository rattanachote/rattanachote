#include<stdio.h>
int main()
{
    int a[10],b;    float c=0;
    for(b=0;b<10;b++)
    {
        printf("Input score : ");
        scanf("%d",&a[b]);
        c=c+a[b];
    }
    printf("%.2f",c/10);
}
