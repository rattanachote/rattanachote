#include<stdio.h>
#include<conio.h>
void sq(int a);
void main()
{
    int b;
    printf("Input number : ");
    scanf("%d",&b);
    sq(b);

}
void sq(int a)
{
    int c,d;
    char e[30];
    for(d=1;d<=a;d++)
        {
            printf("Input name : ");
            scanf("%s",e);
            printf("Input score : ");
            scanf("%d",&c);
            if(c>=80&&c<=100)
                {
                    printf("%s is grade 4 \n",e);
                }
                else if(c>=75&&c<=79)
                        {
                            printf("%s is grade 3.5 \n",e);
                        }
                        else if(c>=70&&c<=74)
                                {
                                    printf("%s is grade 3 \n",e);
                                }
                            else if(c>=65&&c<=69)
                                    {
                                        printf("%s is grade 2.5 \n",e);
                                    }
                                    else if(c>=60&&c<=64)
                                            {
                                                printf("%s is grade 2 \n",e);
                                            }
                                            else if(c>=55&&c<=59)
                                                    {
                                                        printf("%s is grade 1.5 \n",e);
                                                    }
                                                    else if(c>=50&&c<=54)
                                                            {
                                                                printf("%s is grade 1 \n",e);
                                                            }
                                                            else if(c<=49)
                                                                    {
                                                                        printf("%s is grade 0 \n",e);
                                                                    }
        }
    printf(">-Please any key to exit>-");
    getch();
}
