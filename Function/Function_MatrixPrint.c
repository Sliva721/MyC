/*Отдельная функция печати двумерного (многомерного) массива - МАТРИЦЫ*/

void printMatrix(int n, int m, int data[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }
}