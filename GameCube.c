#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    printf("###########  Devil\'s bones   ###########\n");
    printf("#                                      #\n");
    printf("#   Commands:                          #\n");
    printf("#                                      #\n");
    printf("#   1 - new game                       #\n");
    printf("#   0 - exit                           #\n");
    printf("#                                      #\n");
    printf("########################################\n\n");

    int control;
    int value = 0;

    printf("Enter command: ");
    scanf("%d", &control);
    while (control != 0) {
        switch (control) {
            case 1:
                value = 1 + rand() % 6;
                printf("Result: %d\n", value);
                break;
            default:
                printf("Error! Try again...\n");
                break;
        }
        printf("Enter command: ");
        scanf("%d", &control);
    }

    printf("Good bye!\n");
    return 0;
}