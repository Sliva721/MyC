#include <stdio.h>

int main() {
    int N, p = -9998;
    scanf("%d", &N);
    while (N != -9999) {
        // printf ("N=%d p=%d\n", N,p); //проверяем какие значения будут для сравнения цикле
        if (p >= N && p > 0) {
            printf("NO\n");
            return 0;
        }
        p = N;
        scanf("%d", &N);
    }
    printf("YES");
    return 0;
}