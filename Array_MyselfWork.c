//     МАССИВЫ

// Реверс
// Считать переменную размера массива (5), считать значения (2 5 8 9 -23) и Переставить элементы массива в
// обратном порядке.

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    // printf("%d",N);
    int arr[N];
    for (int i = 0; i < N; ++i) scanf("%d", &arr[i]);

    for (int i = N - 1; i >= 0; i--) printf("%d", arr[i]);

    return 0;
}
