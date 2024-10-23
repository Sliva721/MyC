// Транспонирование
// Для заданной матрицы вывести на экран транспонированную матрицу.

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    //
    int arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {  //    СЧИТЫВАЕМ (scanf) ЗНАЧЕНИЯ ПОСТРОЧНО
            scanf("%d", &arr[i][j]);
        }

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++)    //   ВЫВОДИМ НА ЭКРАН СТОЛБЦЫ но в СТРОКИ
            printf("%d ", arr[i][j]);  //
        printf("\n");
    }

    return 0;
}