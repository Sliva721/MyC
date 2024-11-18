#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../common/utils.h"

void PrintFileContent(FILE *file, int number_non_blank, int number_all, int squeeze_blank, int show_tabs) {
    char line[1024];
    int line_count = 0;
    int blank_lines = 0;

    while (fgets(line, sizeof(line), file) != NULL) {
        // Условие на сжатие пустых строк
        if (strcmp(line, "\n") == 0) {
            blank_lines++;
            if (squeeze_blank && blank_lines > 1) {
                continue;
            }
        } else {
            blank_lines = 0;
        }

        line_count++;
        if (number_non_blank && strcmp(line, "\n") != 0) {
            printf("%6d\t", line_count);
        } else if (number_all) {
            printf("%6d\t", line_count);
        }

        // Показать символы табуляции
        if (show_tabs) {
            for (char *p = line; *p; p++) {
                if (*p == '\t') {
                    putchar('^');
                    putchar('I');
                } else {
                    putchar(*p);
                }
            }
        } else {
            fputs(line, stdout);
        }
    }
}

int main(int argc, char **argv) {
    int number_non_blank = 0, number_all = 0, squeeze_blank = 0, show_tabs = 0;

    // Обработка аргументов командной строки
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-b") == 0) {
            number_non_blank = 1;
        } else if (strcmp(argv[i], "-n") == 0) {
            number_all = 1;
        } else if (strcmp(argv[i], "-s") == 0) {
            squeeze_blank = 1;
        } else if (strcmp(argv[i], "-t") == 0) {
            show_tabs = 1;
        } else {
            FILE *file = fopen(argv[i], "r");
            if (!file) {
                PrintError("Could not open file");
                return EXIT_FAILURE;
            }
            PrintFileContent(file, number_non_blank, number_all, squeeze_blank, show_tabs);
            fclose(file);
        }
    }

    // Если нет файлов, читаем из stdin
    if (argc == 1) {
        PrintFileContent(stdin, number_non_blank, number_all, squeeze_blank, show_tabs);
    }

    return EXIT_SUCCESS;
}