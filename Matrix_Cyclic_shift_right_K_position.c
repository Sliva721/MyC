/*Произвести циклический сдвиг столбцов квадратной матрицы A[N] на K позиций вправо.
-------
Входные данные:
Одно натуральное число N. Далее с новой строки N строк по N целых чисел в каждой.
N не превышают десяти. Затем с новой строки записано натуральное число K.
-------
Выходные данные:
Вывести на исходную матрицу N на N, столбцы которой циклически сдвинуты на
K позиций вправо. Числа разделять пробелами.
-------
3
1 2 3
1 4 5
2 3 -2
2
**********
2 3 1
4 5 1
3 -2 2  */

#include <stdio.h>

void printMatrix(int n, int m, int data[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // int n = 0, m = 0, k = 0;
    int n = 0, m = 0;
    // if ((scanf("%d%d%d", &n, &m, &k)) != 3 || n <= 0 || m <= 0 || k < 0) {
    //     printf("n\a");
    if ((scanf("%d%d", &n, &m)) != 2 || n <= 0 || m <= 0) {
        printf("n\a");
    }
    int data[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) scanf("%d", &data[i][j]);
    }
    // printMatrix(n, m, data);

    for (int i = 0; i < n; i++) {
        for (int j = m - 1; j > 0; j--)   {
            int tmp = data[i][j-1];
            data[i][j-1] = data[i][j];
            data[i][j] = tmp;
        }

        }
    printMatrix(n, m, data);

    return 0;
}