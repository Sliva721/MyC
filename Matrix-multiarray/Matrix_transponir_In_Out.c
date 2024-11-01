/*  Транспонирование
    Для заданной матрицы вывести на экран транспонированную матрицу. */

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
    int n, m;
    scanf("%d%d", &n, &m);

    int data[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            scanf("%d", &data[i][j]);
        }

    printMatrix(n, m, data);

    /*Функция транспонирования*/
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++)  //   ВЫВОДИМ НА ЭКРАН СТОЛБЦЫ но в СТРОКИ
            printf("%d ", data[i][j]);
        printf("\n");
    }

    return 0;
}