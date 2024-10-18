//                             Дубликаты
// Удалить из последовательности дубликаты.  (-87 -78 - 66 - 66 1 2 3 4 4 4  5 6 6 6 7 8 9 9  )
#include <stdio.h>

int main() {
    int N, a, b;
    scanf("%d", &N);
    while (N--) {
        scanf("%d", &a);
        if (b != a) {
            printf("%d ", a);
            b = a;
        }
    }
    return 0;
}