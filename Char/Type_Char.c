/*Char - тип данных.
Вывод в виде символа и значения по таблице ASCII
Вывод разницы в таблицемежду символами.
*/

#include <stdio.h>

int main() {
    char c = 'a';
    char C = 'A';
    printf("%c = %d\n%c = %d", c, c, C, C);
    printf("\n%d", c - C);
    
       
       return 0;
}

// YoungCoder.Ru 2014 - 2024