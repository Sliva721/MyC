/*Циклический сдвиг одномерного массива ВПРАВО на 1 элемент*/

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
    //printArray(array,n);
    

    /*Cyclic shift to the right- циклический сдвиг ВПРАВО*/

    int tmp = array[n-1];
     for (int i = n-1; i > 0; i-- )
     array[i] = array[i -  1];
     array[0] = tmp;
     printArray(array,n);

    return 0;
}