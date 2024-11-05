//                                                           Степени двойки
// По заданному N вывести через пробел все (натуральные, т.е. 1,2,3,…) степени числа 2, для которых 2k ≤ N.

// Второе (это МОЕ) длинное решение через Логарифм числа 2
#include <math.h>
#include <stdio.h>

int main() {
    int N, k;
    scanf("%d", &N);

    int a;
    a = log2(N);  // получаем логарифм числа N по основанию 2  - это 7.
    for (int k = 1; k <= a; k++)  // начинаем циклить
        printf("%d ", k);

    return 0;
}