/*Копирование одномерного массива*/

#include <stdio.h>
#include <stdlib.h>

/* САМОСТОЯТЕЛЬНАЯ ФУНКЦИЯ ПЕЧАТИ МАССИВА*/

void printArray(int array[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", array[i]);
    printf("\n");
}

int main() {
    int n = 0;
    if ((scanf("%d", &n)) != 1 || n < 0) printf("n/a");

    int *array = (int *)malloc(n * sizeof(int));  // Выделяем память для первого массива
    int *array_copy = (int *)malloc(n * sizeof(int));  // Выделяем память для второго массива

    for (int i = 0; i < n; i++) scanf("%d", &array[i]);

    /*Функция копирования */

    for (int i = 0; i < n; i++) {
        array_copy[i] = array[i];
    }
    printArray(array, n);
    printArray(array_copy, n);

    return 0;
}