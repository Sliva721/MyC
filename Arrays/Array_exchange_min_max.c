#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    // Массив
    int A[N];
    for (int i = 0; i < N; ++i) scanf("%d", &A[i]);
    // находим значения min max
    int min = A[0], max = A[0];
    for (int i = 0; i < N; ++i) {
        if (max < A[i]) max = A[i];
        if (min > A[i]) min = A[i];
    }
    //         printf("min=%d max=%d",min,max);    //проверка

    // меняе местами значения минимумов и максимумов
    for (int i = 0; i < N; i++) {
        if (A[i] == min) {
            A[i] = max;
        } else if (A[i] == max) {
            A[i] = min;
        }
        printf("%d ", A[i]);
    }
    return 0;
}