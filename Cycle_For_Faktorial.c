#include <stdio.h>

int main() {
    int k, F = 1;
    scanf("%d", &k);
    // printf("%d\n",k); // проверяем присвоение, тут часто ошибка...
    if (k <= 0) k = 1;
    for (; k > 0; k--) F = F * k;
    printf("%d", F);
    return 0;
}