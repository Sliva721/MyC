#include <stdio.h>

int main() {
    int N = 0, k = 0;

    while (k != 2517) {
        scanf("%d", &N);
        k = N;
        // printf ("N=%d  k=%d\n", N,k); //проверяем какие значения будут  в цикле (гоним до k=2517)
    }

    do {
        scanf("%d", &N);
        //  printf ("N=%d  k=%d\n", N,k); // проверяем значения
        if (k == 2517 && N == -9999) {
            break;
        }
        printf("%d ", N);
    }

    while (N != -9999);

    return 0;
}