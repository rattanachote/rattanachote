#include<stdio.h>
#include<string.h>
void main()
{
    char str[]="Computer Engineering";
    char msg1[30],msg2[30];
    strcpy(msg1,str);
    strncpy(msg2,str,8);
    msg2[8] = '\0';
    printf("String in array str is %s\n",str);
    printf("String in array msg1 is %s\n",msg1);
    printf("String in array msg2 is %s",msg2);
}

