#include<stdio.h>
int main()
{
    char name[15],lname[20];
    printf("Input your name : ");
    gets(name);
    printf("Input your surname : ");
    scanf("%s",lname);
    printf("Hi! ,%s %s",name,lname);
}
