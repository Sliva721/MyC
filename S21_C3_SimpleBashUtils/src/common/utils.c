#include "utils.h"
#include <stdlib.h>

void PrintError(const char *msg) {
    fprintf(stderr, "Error: %s\n", msg);
}

int CountLines(FILE *file) {
    char ch;
    int count = 0;

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }
    rewind(file);  // Вернуть указатель файла в начало
    return count;
}