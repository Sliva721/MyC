/* Циклический сдвиг
    Произвести циклический сдвиг столбцов квадратной матрицы A[N] на K позиций вправо.*/

/*  Выходные данные:
Вывести на исходную матрицу N на N, столбцы которой циклически сдвинуты на K позиций вправо.
Числа разделять пробелами.
Sample Input 1:

3
1 2 3
1 4 5
2 3 -2
2
Sample Output 1:

2 3 1
4 5 1
3 -2 2 */

#include <stdio.h>

void printMatrix(int n, int data[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n = 0, k = 0;
    if ((scanf("%d", &n)) != 1 || n < 1) {
        printf("n\a");
    }
    int data[n][n];
    
    /*input data to matrix */
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) scanf("%d", &data[i][j]);
    }

    scanf("%d", &k);

    /* Функция циклического сдвига матрцы вправо на К позиций*/
    for (int i = 0; i < n; i++) {
        for (int c = 0; c < k; c++) {
            for (int j = n - 1; j > 0; j--) {
                int tmp = data[i][j - 1];
                data[i][j - 1] = data[i][j];
                data[i][j] = tmp;
            }
        }
    }

    printMatrix(n, data);

    return 0;
}