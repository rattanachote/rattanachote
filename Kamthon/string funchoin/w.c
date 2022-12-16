#include <stdio.h>
#include <conio.h>
main()
{
    int K,U;
    printf("Input Multuple from : ");
    scanf("%d",&K);
    printf("Input Multuple to : ");
    scanf("%d",&U);
    for(int i=1; i<=12; i++){
        for(int e=K; e<=U; e++){
            printf("%d * %d = %d   ",e,i,e*i);
    }
    printf("\n");
    }
    getch();
}

