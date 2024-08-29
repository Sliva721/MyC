#include <stdio.h>

int main() {
    int n, min, max;
    scanf("%d", &n);
    max = min = n; //вот интересный момент, но когда переменные уже объявлены на старте!!!!
    do {
        if (n>max) max = n; //вот как одной строкой и сравнить и присвоить.
        if (n<min) min = n; //вот как одной строкой и сравнить и присвоить.
        scanf("%d", &n);
    }
    while(n);
    printf("%d %d", max, min);
}