#include<stdio.h>
void main()
{
    char a[158]="999";
    int i,j=0;
    for(i=0;i<=157;i++)
    {
        if(a[i]=='0')
            a[i]=0;
        if(a[i]=='1')
            a[i]=1;
            if(a[i]=='2')
            a[i]=2;
            if(a[i]=='3')
            a[i]=3;
            if(a[i]=='4')
            a[i]=4;
            if(a[i]=='5')
            a[i]=5;
            if(a[i]=='6')
            a[i]=6;
            if(a[i]=='7')
            a[i]=7;
            if(a[i]=='8')
            a[i]=8;
            if(a[i]=='9')
            a[i]=9;
        j=j+a[i];
    }
    printf("%d",j);

}
