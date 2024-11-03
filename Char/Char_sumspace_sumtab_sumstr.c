/*Программа подсчета суммы пробелов, табуляций и строк
*/


#include <stdio.h>

int main() {
    int a = 0, sumtab = 0, sumspace = 0, sumstr = 0;

    while ((a = getchar()) != EOF)  // считываем по одному символу до конца файла - EOF
    {
        if (a == '\t') sumtab++;
        if (a == ' ') sumspace++;
        if (a == '\n') sumstr++;
    }
    printf("Tab=%d, Space=%d, Str=%d", sumtab, sumspace, sumstr);
    return 0;
}