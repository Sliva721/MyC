#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    do {
        if (N < 0 || N == -9999) {
            printf("NO\n");
            printf("%d\n", N);
            break;
        }
        scanf("%d", &N);
    } while (N != -9999);
    printf("YES");

    return 0;
}