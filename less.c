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
    int n = 0, m = 0;
    if ((scanf("%d%d", &n, &m)) != 2 || n <= 0 || m <= 0) {
        printf("n\a");
    }

    /*Объявляем  массив и вносим значения*/

    int data[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) scanf("%d", &data[i][j]);
           }
            printMatrix(n, m, data);
/* Функция поворота матрицы*/
    int tmp;
    for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - 1 - i; j++) {
            tmp = data[i][j];
            data[i][j] = data[n - j - 1][i];
            data[n - j - 1][i] = data[n - i - 1][n - j - 1];
            data[n - i - 1][n - j - 1] = data[j][n - i - 1];
            data[j][n - i - 1] = tmp;
        }
    
}
printf("Повернутая матрица\n");
printMatrix(n, m, data);

return 0;

}
