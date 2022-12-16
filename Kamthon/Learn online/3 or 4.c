#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,o=1;
    printf("Input number to use funchion !!(3 or 4)!! ");
    scanf("%d",&a);
    while(o==1&&a==3)
    {
            if(a==3)
                {
                    for(b=0;b<=2;b++)
                        {
                            if(b==1)
                                printf("010\n");
                            else
                                printf("000\n");
                        }
                }
        o++;
    }
     while(o==1&&a==4)
     {
        if(a==4)
            {
                for(b=0;b<=3;b++)
                    {
                        if(b==1||b==2)
                            printf("0110\n");
                        else
                            printf("0000\n");
                    }
            }
            o++;
    }

    getch();
}
