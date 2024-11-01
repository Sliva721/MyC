/*Реверс значений одномерного массива*/

#include <stdio.h>

/* САМОСТОЯТЕЛЬНАЯ ФУНКЦИЯ ПЕЧАТИ МАССИВА*/

void printArray(int array[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", array[i]);
    printf("\n");
}

int main() {
    int n = 0;
    if ((scanf("%d", &n)) != 1 || n < 0) printf("n/a");

    int array[n];
    for (int i = 0; i < n; i++) scanf("%d", &array[i]);
    
    /*Функция РЕВЕРСА (переворачивание значений от начала к концу)*/

    for (int i = 0; i < n/2; i++) {
    int tmp = array[i];
    array[i] = array[n - 1 - i];
    array[n - 1 - i] = tmp;
    }
    printArray(array, n);

    return 0;
}