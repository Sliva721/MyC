#include <stdio.h>

int main() {
    int K, x;
    scanf("%d", &K);
    x = 1 - K % 2;  //собственно инверсия: если 1, то 0; если 0, то 1
    printf("%d", x);
    return 0;
}