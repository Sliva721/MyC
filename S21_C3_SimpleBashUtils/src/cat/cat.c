#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../common/utils.h"

void printFileContent(FILE *file, int number_non_blank, int number_all, int squeeze_blank) {
    char line[1024];
    int line_count = 0;
    int blank_lines = 0;

    while (fgets(line, sizeof(line), file) != NULL) {
        if (strcmp(line, "\n") == 0) blank_lines++;
        if (squeeze_blank && blank_lines > 1) {
            continue;
        } else
            blank_lines = 0;
    }
    line_count++;
    if(number_non_blank && strcmp(line, "\n") != 0) {
        printf("%6d\t", line_count);
    }
    else if(number_all) {
         printf("%6d\t", line_count);
    }
}

int main(int argc, char const *argv[]) {
    int number_non_blank = 0; 
    int number_all = 0; 
    int squeeze_blank = 0;

    /* Обработка аргументов-флагов командной строки */
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-b") == 0) {
            number_non_blank = 1;
        } else if (strcmp(argv[i], "-n") == 0) {
            number_all = 1;
        } else if (strcmp(argv[i], "-s") == 0) {
            squeeze_blank = 1;
        } else {
            FILE *file = fopen(argv[i], "r");
            if (!file) {
                printError("n/a");
                return EXIT_FAILURE;
            }
            printFileContent(file, number_non_blank, number_all, squeeze_blank);
            fclose(file);
        }
    }
    return EXIT_SUCCESS;
}