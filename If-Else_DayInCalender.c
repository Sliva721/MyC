#include <stdio.h>

int main() {
    int dd, mm;
    scanf("%d%d", &dd, &mm);
    // printf ("%d %d\n",dd,mm);
    if ((dd > 0 && dd < 32) && (mm == 1 || mm == 3 || mm == 5) | mm == 7 || mm == 8 || mm == 10 || mm == 12) {
        printf("correct");
    } else {
        if ((dd > 0 && dd < 30) && (mm == 2) ||
            (dd > 0 && dd < 31) && (mm == 4 || mm == 6 || mm == 9 || mm == 11)) {
            printf("correct");
        } else {
            printf("error");
        }
    }
    return 0;
}
