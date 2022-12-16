#include <stdio.h>
#include <conio.h>
int main()
{
    int loop;
    int i;
    int j;
    int sloop;
    printf("Input number : ");
    scanf("%d",&loop);
    for(i = 1; i <= loop; i++){

        sloop = loop-i;

        for(j = 1; j <= sloop; j++ ){
            printf(" ");
        }

        for(j = 1; j <= loop-sloop; j++){
            printf("%d", j);
        }

        for(j = loop-sloop-1; j >= 1; j--){
            printf("%d", j);
        }

        printf("\n");
    }

    getch();
}
