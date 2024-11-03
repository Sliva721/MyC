#include <stdio.h>

/*Объявление и тело функции печати массива*/

void printArray(int array[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", array[i]);
}