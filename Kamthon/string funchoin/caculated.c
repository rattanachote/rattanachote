
#include <stdio.h>
#include <math.h>
int main()
{
    int n = 1000000;
    int count = 0;
    int c=0;
    for(int i=1;i<n+1;i++)
    {
        count = 0;
        for(int j = 1;j<=i;j++)
        {
            if(i%j ==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            c++;
        }
        if(c == 10001)
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}

