#include<stdio.h>
char my(int x);
void main()
{
    char ch;
    ch=my(5);
    printf("%c\n",ch);
}
char my(int x)
{
    char lch;
    printf("Enter your character : ");
    scanf(" %c",&lch);
    while(x>0)
    {
        printf("%c",lch);
        x--;
    }
    printf("\n");
    return lch;
}
