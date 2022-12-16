#include<stdio.h>
int RoundInput( void );
int main()
{
    int i,round;
    round = RoundInput();
    for( i=1; i<=round;i++)
    printf("hello #%d\n",i);
    return 0;
    }
    int RoundInput(void)
    {
        int answer;
        printf( "Please input number of hello : ");
        scanf( "%d", &answer );
        return  answer;
    }
