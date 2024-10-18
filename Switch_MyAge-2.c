////// Оптимизировано с  переменной  и без повторения однотипных последовательных сообщений Printf
#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "");
    int k;
    scanf("%d%", &k);

    switch (k) {
        case 11:
        case 12:
        case 13:
        case 14:
            printf("Мне %d лет\n", k);
            break;
        default:
            switch (k % 10) {
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
    }
    return 0;
}