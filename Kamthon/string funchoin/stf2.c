#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char n[20] = "";
    char q[20] = "What is your name";
    puts(q);
    gets(n);
    printf("Hello %s\n",n);
    i=strlen(n);
    printf("String contains is %d character",i);
}
