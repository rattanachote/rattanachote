#include<stdio.h>
#include<conio.h>
int main()
{
    /*int a=0,b[1000],c=0;
        for(a=0;a<=1;a+=0)
        {
            printf("Input number !!!(Please -999 to exit)!!!  : ");
            scanf("%d",&b[a]);
             if(b[a]!=-999)
            {
                c=c+b[a];
            }
            if(b[a]==-999)
            {
                break;
            }
        }
        printf("Avg is %d !!!(-999 is not in caculate)!!!",c);
        getch();
        return 0;*/
        int a=0,b[1000],c=0,d;
        do
        {
            printf("Input number !!!(Please -999 to exit)!!!  : ");
            scanf("%d",&b[a]);
            if(b[a]!=-999)
            {
                c=c+b[a];
            }
            else
            {
                break;
            }
            a+=0;
        }
        while(a<=1);
        printf("Avg is %d !!!(-999 is not in caculate)!!!",c);
        getch();
        return 0;
}
