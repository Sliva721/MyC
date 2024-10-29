#include <stdio.h>

int main() {
    int A, B;
    scanf("%d%d", &A, &B);
    printf("%d %d\n", A, B);  // проверяем присвоение, тут часто ошибка...
    for (int i = B; i >= A; i--) printf("%d ", i);
    return 0;
}