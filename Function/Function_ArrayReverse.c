/*Функция реверса значений одномерного массива*/
/*ВНУТРИ ОДНОМЕРНОГО массива (бывает копия и реверс в новый массив)*/

#include <stdio.h>

void reverseArray(int array[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int tmp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = tmp;
    }
}