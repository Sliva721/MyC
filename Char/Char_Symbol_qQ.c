/* Программа для перевода символов в верхний регистр.
*/

#include <stdio.h>

int main() {
    char symbol = 0;
    scanf("%c", &symbol);  // сканирование (присвоение) символьных значений
    printf("%c", symbol -32);  // 32 - это разница между строчными и заглавными буквами в таблице ASCII (т.е.
                                // symbol минус 32 - выводит ЗАГЛАВНУЮ букву)
    return 0;
}