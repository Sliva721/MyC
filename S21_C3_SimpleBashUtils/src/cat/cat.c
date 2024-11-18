#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../common/utils.h"

// Функция для печати содержимого файла с различными опциями
void PrintFileContent(FILE *file, int number_non_blank, int number_all, int squeeze_blank,
                      int show_tabs, int show_ends, int show_nonprinting) {
    char line[1024];
    int blank_lines = 0;               // Счетчик пустых строк
    int non_blank_line_count = 0;      // Счетчик непустых строк для нумерации
    int all_line_count = 0;             // Счетчик для нумерации всех строк
    int printed_last_line = 0;        // Флаг для отметки, печаталась ли последняя строка

    while (fgets(line, sizeof(line), file) != NULL) {
        all_line_count++; // Увеличиваем счетчик всех строк при каждой итерации

        // Условие на сжатие пустых строк
        if (strcmp(line, "\n") == 0) { // Проверяем на пустую строку
            blank_lines++;
            if (squeeze_blank && blank_lines > 1) {
                continue; // Пропускаем пустые строки при сжатии
            }
        } else {
            blank_lines = 0; // Сброс счетчика пустых строк
            non_blank_line_count++; // Увеличиваем счетчик непустых строк
        }

        // Определяем нужно ли выводить номер строки
        if (number_non_blank && blank_lines == 0) {
            printf("%6d\t", non_blank_line_count); // Выводим номер непустой строки
        } else if (number_all) {
            printf("%6d\t", all_line_count); // Выводим номер строки (пустой и непустой)
        }

        // Обработка управляющих символов и их отображение
        for (char *p = line; *p; p++) {
            if (show_nonprinting && *p != '\n' && *p != '\t' && *p < 127) { // Игнорируем LFD и TAB
                if (*p < 32) { // Управляющие символы
                    putchar('^'); 
                    putchar(*p + 64); // Перевод в символы ^A - ^Z
                } else if (*p == 127) { // Символ DEL
                    putchar('^');
                    putchar('?');
                } else {
                    putchar(*p); // Обычные символы
                }
            } else if (show_tabs && *p == '\t') {
                putchar('^');
                putchar('I'); // Показать табуляцию как ^I
            } else {
                putchar(*p); // Обычные символы
            }
        }

        // Если нужно вывести символ в конце строки
        if (show_ends) {
            putchar('$'); // Выводим символ конца строки
        }

        putchar('\n'); // Переход на новую строку после обработки строки
        printed_last_line = 1; // Запоминаем, что последняя строка была напечатана
    }

    // Обработка оставшихся пустых строк для сжатия
    if (squeeze_blank && blank_lines > 0) {
        putchar('$'); // Выводим символ конца строки для пустой строки
        putchar('\n'); // Переход на новую строку для пустой линии
    }
}

int main(int argc, char **argv) {
    int number_non_blank = 0, number_all = 0, squeeze_blank = 0, show_tabs = 0;
    int show_ends = 0, show_nonprinting = 0; // Новый флаг для символа конца строки и недопечатаемых символов

    // Обработка аргументов командной строки
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-b") == 0 || strcmp(argv[i], "--number-nonblank") == 0) {
            number_non_blank = 1; // Флаг для нумерации только непустых строк
        } else if (strcmp(argv[i], "-n") == 0 || strcmp(argv[i], "--number") == 0) {
            number_all = 1; // Флаг для нумерации всех строк
        } else if (strcmp(argv[i], "-s") == 0 || strcmp(argv[i], "--squeeze-blank") == 0) {
            squeeze_blank = 1; // Флаг для сжатия пустых строк
        } else if (strcmp(argv[i], "-t") == 0) {
            show_tabs = 1; // Флаг для отображения табуляции
        } else if (strcmp(argv[i], "-E") == 0 || strcmp(argv[i], "--show-ends") == 0) {
            show_ends = 1; // Флаг для отображения символа конца строки
        } else if (strcmp(argv[i], "-v") == 0 || strcmp(argv[i], "--show-nonprinting") == 0) {
            show_nonprinting = 1; // Флаг для отображения недопечатаемых символов
        } else {
            FILE *file = fopen(argv[i], "r");
            if (!file) {
                PrintError("Failed to open file");
                return EXIT_FAILURE;
            }
            PrintFileContent(file, number_non_blank, number_all, squeeze_blank, show_tabs, show_ends, show_nonprinting);
            fclose(file);
        }
    }

    return EXIT_SUCCESS;
}