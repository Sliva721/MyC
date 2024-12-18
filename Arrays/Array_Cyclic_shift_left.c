/*Циклический сдвиг одномерного массива ВЛЕВО на 1 элемент*/

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
    printArray(array,n);
    

    /*Cyclic shift to the left- циклический сдвиг влево*/

    int tmp = array[0];
     for (int i = 0; i < n - 1; i++ )
     array[i] = array[i + 1];
     array[n-1] = tmp;
     printArray(array,n);

    return 0;
}