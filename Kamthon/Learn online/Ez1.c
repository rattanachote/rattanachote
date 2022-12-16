#include<stdio.h>
int main()
{
    float a[1000],f=0;
    int c=0,e;
    char d;
    do
    {
        printf("Input Funchion to use !!!(Please m to chose men Please w to chose women Please others key to exit )!!! : ");
        scanf("%c",&d);
         if(d=='m'||d=='M')
        {
            for(e=0;e<10;e++)
            {
                printf("Input Weight : ");
                scanf("%f",&a[e]);
                f=f+a[e];
            }
            printf("Avg men Wight %.2f",f/10);
            break;
        }
        else if(d=='w'||d=='W')
        {
            for(e=0;e<10;e++)
            {
                printf("Input Weight : ");
                scanf("%f",&a[e]);
                f=f+a[e];
            }
            printf("Avg women Wight %.2f",f/10);
            break;
        }
        else
            break;
        c++;
    }
    while(c<=1);
}
