#include<stdio.h>
int main()
{
    int a[4],b,c[4],d,e,f,g;
    for(b=0;b<=4;b++)
    {
        printf("Student %d Input Thai : ",b);
        scanf("%d",&a[b]);
    }
    for(g=0;g<=4;g++)
    {
               printf("Student %d Input Eng : ",b);
        scanf("%d",&c[g]);
    }
        for(f=0;f<=4;f++)
    {
        e=a[f]+c[f];
        printf("Student  %d\n",e);
    }
}
