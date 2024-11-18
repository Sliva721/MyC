#include <stdio.h>
#include "utils.h"


/*Функция вывода сообщений об ошибках*/
void printError(const char *msg) { fprintf(stderr, "%s", msg); }

/*функция подсчета строк*/
int countLines(FILE *file) {
    char ch;
    int count = 0;

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            count++;
        }
       
    }
     rewind(file); /*вернуть указатель файла в начало*/
     return count;
}