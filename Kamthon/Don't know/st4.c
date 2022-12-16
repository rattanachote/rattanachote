#include<stdio.h>
void main()
{
    char msg[10];
    scanf("%9[123456789]s",msg);
    printf("%s",msg);
}
