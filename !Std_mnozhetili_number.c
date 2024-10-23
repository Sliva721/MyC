#include <stdio.h>

void print_number_factors(int x) {
    printf("Все делители числа: ");
    int d = 2;
    while (x != 1) {
        while (x % d == 0) {
            printf("%d ", d);
            x /= d;
        }
        d += 1;
    }
    printf("\n");
}

int main() {
    int x = 0;
    printf("Numer: ");
    scanf("%d", &x);
    print_number_factors(x);

    return 0;
}