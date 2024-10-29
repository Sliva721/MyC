#include <stdio.h>

int main() {
    int a = 0, sumtab = 0, sumspace = 0, sumnewline = 0;

    while ((a = getchar()) != EOF)  // считываем по одному символу до конца файла - EOF
    {
        if (a == '\t') sumtab++;
        if (a == ' ') sumspace++;
        if (a == '\n') sumnewline++;
    }
    printf("Tab=%d, Space=%d, NewLine=%d", sumtab, sumspace, sumnewline);
    return 0;
}