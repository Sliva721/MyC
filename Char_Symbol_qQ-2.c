#include <stdio.h>

int main() {
    char symbol = 0, s1 = 0, s2 = 0;
    scanf("%c", &symbol);
    s1 = symbol - 1;
    s2 = symbol + 1;
    printf("%c %c", s1, s2);
    return 0;
}