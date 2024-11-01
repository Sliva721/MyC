#include <stdio.h>

/*Объявление и тело функции печати массива*/

void printArray(int array[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", array[i]);
}

int main() {
    int n = 0;
    if ((scanf("%d", &n)) != 1 || n < 0) printf("n/a");

    /*Самостоятельная (отдельная) функция печати массива*/

    for (int i = 0; i < n - 1; i++) array[i] = array[i + 1];
    printArray(array, n);

    return 0;
}