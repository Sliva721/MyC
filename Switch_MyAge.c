#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "");
    int k, a, b;
    scanf("%d", &k);
    a = k;
    b = k;
    switch (a) {
        case 11:
            printf("Мне %d лет\n", k);
            break;
        case 12:
            printf("Мне %d лет\n", k);
            break;
        case 13:
            printf("Мне %d лет\n", k);
            break;
        case 14:
            printf("Мне %d лет\n", k);
            break;
        default:
            switch (b % 10) {
                case 1:
                    printf("Мне %d год\n", k);
                    break;
                case 2:
                    printf("Мне %d года\n", k);
                    break;
                case 3:
                    printf("Мне %d года\n", k);
                    break;
                case 4:
                    printf("Мне %d года\n", k);
                    break;
                default:
                    printf("Мне %d лет\n", k);
                    break;
            }
            break;
    }
    return 0;
}