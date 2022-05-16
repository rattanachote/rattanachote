#include<stdio.h>
#include<string.h>
int main()
{
    int i,j[999],x,l=0;
    char s[888];
    scanf("%d",&l);
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        j[i]=s[i];
        if(l>=26)
        {
            x=(j[i]+(l-26));
            if(x>122)
            {
                x=x-122+96;
                printf("%c",x);
            }
            else
            {
                printf("%c",x);
            }
        }
        else if(j[i]+l>122)
        {
            x=((j[i]+l)-122)+96;
            printf("%c",x);
        }
        else
            printf("%c",j[i]+l);
    }
}
