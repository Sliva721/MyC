/*Слова.
Подсчитать количество слов в строке. Под словом будем понимать непустую последовательность символов, 
разделённую знаками пробела.

Входные данные:
Символьная строка, состоящая из слов, разделённых пробелами. Длина строки не превышает 100 символов 
без учёта символа перевода строки и нуль символа.

Выходные данные:
Одно целое число -- количество слов во входной символьной строке.

Sample Input:
YoungCoder.Ru 2014 - 2024

Sample Output:
4
*/

#include <stdio.h>

int main(void) {
  // put your code here
    int j = 0;
    char str[100];
    while (scanf("%s", str) == 1) {
        j++;
    }
    printf("%d", j);
  return 0;
}