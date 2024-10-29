// Cтандартный алгоритм поиска максимального числа.

#include <stdio.h>

int main(void) {
    int n = 0;

    scanf("%d", &n);

    int max = -9999;
    int number = 0;

    for (int i = 1; i <= n; i++) {
        scanf("%d", &number);
        if (max < number) max = number;
    }

    printf("%d\n", max);

    return 0;
}