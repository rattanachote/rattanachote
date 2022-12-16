/***************************************************
 * Author    : CS Developers
 * Author URI: https://www.comscidev.com
 * Facebook  : https://www.facebook.com/CSDevelopers
 ***************************************************/

#include<stdio.h>

int main(){

    int amount;
    int paid;
    int change;

    printf("Enter amount of product : ");
    scanf("%d", &amount);

    printf("Enter amount of paid : ");
    scanf("%d", &paid);

    change = paid - amount;
    printf("\n-------------------------------");
    printf("\nChange money total : %d Baht", change);
    printf("\n-------------------------------");

    if(change >= 1000){
        printf("\n1000 Baht = %d ", change/1000);
        change = change % 1000;
    }

    if(change >= 500){
        printf("\n 500 Baht = %d", change/500);
        change = change % 500;
    }

    if(change >= 100){
        printf("\n 100 Baht = %d", change/100);
        change = change % 100;
    }

    if(change >= 50){
        printf("\n  50 Baht = %d", change/50);
        change = change % 50;
    }

    if(change >= 20){
        printf("\n  20 Baht = %d", change/20);
        change = change % 20;
    }

    if(change >= 10){
        printf("\n  10 Baht = %d", change/10);
        change = change % 10;
    }

    if(change >= 5){
        printf("\n   5 Baht = %d", change/5);
        change = change % 5;
    }

    if(change >= 2){
        printf("\n   2 Baht = %d", change/2);
        change = change % 2;
    }

    if(change >= 1){
        printf("\n   1 Baht = %d", change);
    }

    return 0;
}
