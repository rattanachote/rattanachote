#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
char randomShape()
{
    char computer;
    int n = rand() % 3;
    char x[] = {'r', 'p', 's'};
    return x[n];
}

char *compareShape(char playerShape, char computerShape) {
    char *outcome = malloc(20);
    if (playerShape == computerShape) {
        return "tie.";
    }
//    if (playerShape == 'r' && computerShape == 's') {
//        strcat(outcome, "you won.");
//    } else if (playerShape == 'p' && computerShape == 'r') {
//        strcat(outcome, "you won.");
//    } else if (playerShape == 's' && computerShape == 'p') {
//        strcat(outcome, "you won.");
//    } else {
//        strcat(outcome, "you lose.");
//    }
    if ((playerShape == 'r' && computerShape == 's') ||
        (playerShape == 'p' && computerShape == 'r') ||
        (playerShape == 's' && computerShape == 'p')) {
        strcat(outcome, "you won.");
    } else {
        strcat(outcome, "you lose.");
    }
    return outcome;
}

void demo_random() {
    for (int i = 0; i < 100; ++i) {
        printf("%c\n", randomShape());
    }
}

int main() {
    char playerShape, computerShape;
    srand((unsigned int) time(NULL)); // returns the current calendar time  (seconds since Jan 1, 1970)
    printf("enter [r]ock; [p]aper; [s]cissors; [q]uit: ");
    scanf(" %c", &playerShape);  // " %c" will eat spaces
    while (playerShape != 'q') {
        computerShape = randomShape();
        printf("you [%c] vs. computer [%c] -> ", playerShape, computerShape);
        printf("%s\n", compareShape(playerShape, computerShape));
        printf("enter [r]ock; [p]aper; [s]cissors; [q]uit: ");
        scanf(" %c", &playerShape);
    }
}
