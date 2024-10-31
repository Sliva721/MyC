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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Вычисление сумм столбцов

    int maxsum = 0, minsum = 0, max_idx = 0, min_idx = 0;

    for (int j = 0; j < m; j++) {
        int sum = 0;
       for (int i = 0; i < n; i++) 
            sum += matrix[i][j];
      
        if (j < 1 || sum > maxsum) {
            maxsum = sum;
            max_idx = j;
        }
        if (j < 1 || sum < minsum) {
            minsum = sum;
            min_idx = j;
        }
    }

    // Меняем местами столбцы с минимальной и максимальной суммой
    for (int i = 0; i < n; i++) {
        int tmp = matrix[i][min_idx];
        matrix[i][min_idx] = matrix[i][max_idx];
        matrix[i][max_idx] = tmp;
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