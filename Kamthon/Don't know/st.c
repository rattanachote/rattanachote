#include<stdio.h>
#include<string.h>
void main()
{
    char name[20] = "";
    char q[20] = "What is your name ?";
    puts(q);
    gets(name);
    printf("You are %s\n",name);
}
