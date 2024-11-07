/* Задача: перевернуть текст в словах строки.
В строке слова записаны наоборот. Написать программу, расшифровывающую строку.

Sample Input:
sI ur.redoCgnuoY a doog ?etis

Sample Output:
Is YoungCoder.ru a good site?
 */

#include <stdio.h>
#include <string.h>

void reverseArray(char array[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int tmp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = tmp;
    }
}

int main() {
    
    char str[40];
    while (scanf("%s", str) == 1) {
        int len = strlen(str);
        if (len > 0) reverseArray(str, len);
    
    printf("%s ", str);
    }
return 0;
}
