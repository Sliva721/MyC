#include <stdlib.h>
#include <stdio.h>

int main() {
    int a = 0, k = 0, A = 0;
    scanf("%d", &k);
    while (a != -1000) {
        scanf("%d", &a);
        A = a % k;
        printf("%d ", abs(A));
    }
    return 0;
}