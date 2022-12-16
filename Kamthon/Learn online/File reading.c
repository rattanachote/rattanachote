/*#include<stdio.h>
void main()
{
    FILE *fp;
    char a[20];
    int i,b;
    fp = fopen("3.txt","w");
    printf("Input number : ");
    scanf("%d",&b);
        printf("Input strings : ");
    scanf("%s",a);
    for(i=1;i<=b;i++)
    {
        fprintf(fp,"%d.%s\n",i,a);
    }

}*/
#include<stdio.h>
char c;
void main()
{
    FILE *fp;
    fp = fopen("3.txt", "r");
    c = getc(fp);
    while(c != EOF)
        {
            printf("%c", c);
            c = getc(fp);
        }
}
