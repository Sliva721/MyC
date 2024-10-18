#include <stdio.h>

int main() {
    double e, F = 1.0, k = 1.0, exp = 1.0;
    scanf("%lf", &e);
    do {
        F = F * k;
        exp = exp + 1.0 / F;
        k++;
    } while (1.0 / F > e);
    printf("%1.8lf", exp);

    return 0;
}