#include<stdio.h>
#include<string.h>
void main()
{
    int a=1,b,c=0,e=0,f;
    char d[20];
    while(a<=2)
    {
        printf("Input character : ");
        scanf("%s",d);
        for(b=0;b<=strlen(d-1);b++)
        {
            if(d[b]!='a'&&d[b]!='e'&&d[b]!='i'&&d[b]!='o'&&d[b]!='u')
            {
                c++;
            }
            else
            {
                e++;
            }

        }
         printf("A E I O U is %d\n",e);
        printf("Char is %d\n",c-2);
        a++;
    }
}
