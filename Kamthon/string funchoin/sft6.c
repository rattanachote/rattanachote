#include<stdio.h>
#include<string.h>
int main()
{
    char n[20],b[20];
    int a,c,i;
    printf("Input name : ");
    gets(n);
    a=strlen(n);
     printf("Input surname : ");
    gets(b);
    c=strlen(b);
    for(i=a;i>=0;i--)
    {
        printf("%c",n[i]);
    }
    printf("\n");
        for(i=c;i>=0;i--)
    {
        printf("%c",b[i]);
    }

}
