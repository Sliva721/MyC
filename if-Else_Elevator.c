#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "");
    int a1, a2, a3;
    scanf("%d%d%d", &a1, &a2, &a3);
    //    printf("%d %d %d\n",a1,a2,a3);
    if ((a1 < 2 || a1 > 40) || (a2 < 2 || a2 > 40) || (a3 < 2 || a3 > 40)) {
        printf("Никуда не едем\n");
    } else {
        if ((a1 < a2 && a1 < a3) && (a2 < a3)) printf("%d %d %d\n", a1, a2, a3);  // 1 2 3
        if ((a1 > a2 && a1 < a3) && (a2 < a3)) printf("%d %d %d\n", a2, a1, a3);  // 2 1 3
        if ((a1 > a2 && a1 > a3) && (a2 > a3)) printf("%d %d %d\n", a3, a2, a1);  // 3 2 1
        if ((a1 < a2 && a1 > a3) && (a2 > a3)) printf("%d %d %d\n", a3, a1, a2);  // 2 3 1
        if ((a1 < a2 && a1 < a3) && (a2 > a3)) printf("%d %d %d\n", a1, a3, a2);  // 1 3 2
        if ((a1 > a2 && a1 > a3) && (a2 < a3)) printf("%d %d %d\n", a2, a3, a1);  // 3 1 2
        if (a1 == a2 && a1 == a3) printf("%d %d %d\n", a1, a2, a3);               // 3 3 3
        if (a1 > a2 && a1 == a3) printf("%d %d %d\n", a2, a1, a3);                // 4 3 4
        if (a1 == a2 && a1 > a3) printf("%d %d %d\n", a3, a1, a2);                // 4 4 3
        if (a1 == a2 && a1 < a3) printf("%d %d %d\n", a1, a2, a3);                // 3 3 4
        if (a1 == a3 && a1 < a2) printf("%d %d %d\n", a1, a3, a2);                // 3 4 3
        if (a1 > a2 && a2 == a3) printf("%d %d %d\n", a2, a3, a1);                // 4 3 3
    }

    return 0;
}