#include<stdio.h>
char p();
void main()
{
    char c;
    c=p();
    printf("%c\n",c);
}
char p()
{
    char l;
    printf("Enter Character :  ");
    scanf("%c",&l);
    printf("\n");
    return l;
}
