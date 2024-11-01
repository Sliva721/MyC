/*Произвести циклический сдвиг столбцов квадратной матрицы A[N][M] вправо.
-------
2 3
1 2 3
4 5 6

**********
3 1 2
6 4 5
 */

#include <stdio.h>

/*Отдельная функция печати двумерного (многомерного) массива*/

void printMatrix(int n, int m, int data[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n = 0, m = 0;
    if ((scanf("%d%d", &n, &m)) != 2 || n <= 0 ||
        m <= 0) {  //проверка ввода на ошибки (если не цифры, если отрицательные)
        printf("n\a");
    }

    /*Объявляем  массив и вносим значения*/

    int data[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) scanf("%d", &data[i][j]);
    }
    printMatrix(n, m, data);

    /* Циклический сдвиг вправо на 1 позицию*/

    for (int i = 0; i < n; i++) {
        for (int j = m - 1; j > 0; j--) {
            int tmp = data[i][j - 1];
            data[i][j - 1] = data[i][j];
            data[i][j] = tmp;
        }
    }
    printMatrix(n, m, data);

    return 0;
}