/*Длина строки.
Подсчитать количество символов в строке, без учёта нуль-символа.
Входные данные:
Символьная строка. Длина строки не превышает 30 символов без учёта символа перевода строки и нуль символа.
Выходные данные:
Одно целое число -- длина входной символьной строки.

Sample Input:
YoungCoder.Ru

Sample Output:
13
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[31];
   fgets(str, 31, stdin);
   int  l = strlen(str);
    printf("%d\n", l);
    return 0;
}