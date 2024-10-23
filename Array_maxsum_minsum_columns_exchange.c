//Вычислить сумму всех столбцов матрицы и поменять местами столбцы с минимальной
// и максимальной суммой.

// rows - строки 
// columns - столбцы

#include <stdio.h>

#define MAX_ROWS 100 
#define MAX_COLUMNS 100

int main() {
    int N, M;
    int matrix[MAX_ROWS][MAX_COLUMNS];
    int columnSum[MAX_COLUMNS] = {0};
    int minIndex = 0, maxIndex = 0;
    int minSum, maxSum;

    // Ввод размеров матрицы
    // printf("Введите количество строк и столбцов: ");
    scanf("%d %d", &N, &M);

    // Ввод элементов матрицы
    // printf("Введите элементы матрицы:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Вычисление сумм столбцов
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            columnSum[j] += matrix[i][j];
        }
    }

    // Определение минимальной и максимальной суммы столбцов
    minSum = columnSum[0];
    maxSum = columnSum[0];

    for (int j = 0; j < M; j++) {
        if (columnSum[j] < minSum) {
            minSum = columnSum[j];
            minIndex = j;
        }
        if (columnSum[j] > maxSum) {
            maxSum = columnSum[j];
            maxIndex = j;
        }
    }

    // Меняем местами столбцы с минимальной и максимальной суммой
    for (int i = 0; i < N; i++) {
        int temp = matrix[i][minIndex];
        matrix[i][minIndex] = matrix[i][maxIndex];
        matrix[i][maxIndex] = temp;
    }

    // Вывод измененной матрицы
    printf("Измененная матрица:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}