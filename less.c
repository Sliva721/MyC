//                Столбцы
// Поменять местами столбец с минимальной суммой элементов
// со столбцом с максимальной суммой элементов.
// Два натуральных числа  N и M.
//Вывести исходную матрицу  в которой столбец с минимальной и столбец
// с максимальной суммой элементов поменяны местами.

//Вычислить сумму всех столбцов матрицы и поменять местами столбцы с минимальной
// и максимальной суммой.

// rows - строки
// columns - столбцы

#include <stdio.h>

int main() {
    
    int n = 0, m = 0;
   scanf("%d%d", &n, &m);

    int matrix[n][m];
    int sum[m];
    int minindex = 0, maxindex = 0,minsum = 0, maxsum = 0;
   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Вычисление сумм столбцов
 //   int sum = 0;
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            sum[j] += matrix[i][j];
        }
    }

    // Определение минимальной и максимальной суммы столбцов
    minsum = sum[0];
    maxsum = sum[0];

    for (int j = 0; j < m; j++) {
        if (sum[j] < minsum) {
            minsum = sum[j];
            minindex = j;
            printf("minsum = %d, minindex = %d", minsum, j);
        }
        if (sum[j] > maxsum) {
            maxsum = sum[j];
            maxindex = j;
        }
    }

    // Меняем местами столбцы с минимальной и максимальной суммой
    for (int i = 0; i < n; i++) {
        int temp = matrix[i][minindex];
        matrix[i][minindex] = matrix[i][maxindex];
        matrix[i][maxindex] = temp;
    }

    // Вывод измененной матрицы
    printf("Измененная матрица:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}