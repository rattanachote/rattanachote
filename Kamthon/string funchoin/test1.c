#include<stdio.h>
#include<string.h>
int main()
{
    char st[60],ch;
    int i,a,tot=0;
    printf("input ");
    gets(st);
    a=strlen(st);
    printf("inpuut ");
    scanf(" %c",&ch);
    for(i=0;i<a;i++)
    {
        if(st[i]==ch)
            tot++;
    }
    printf("%d",tot);
}
