/*                Столбцы
 Для заданной матрицы посчитать сумму элементов каждого столбца.
 Два натуральных числа  N и M.
 Поменять местами столбцы с максимальной и минимальной суммой.
 Sample Input:
3 4
1 2 3 4
1 3 4 5
0 2 3 -2
*/

/*Sample Output:

3 2 1 4
4 3 1 5
3 2 0 -2 */

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    int matrix[n][m];
    int arr[m];

    /*Функция заполнения матрицы значениями*/
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    /*Функция вывода заполненной матрицы на печать*/
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    /*Функция подсчета сумм значений в столбцах матрицы*/
    int a = 0;
    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) a += matrix[i][j];
        a = 0;
    }

    for (int j = 0; j < m; j++) {
        printf("%d ", arr[j]);
    }

    printf("\n");

    /* Функция печати массива с суммами столбцов
    for (int j = 0; j < m; j++){
            printf("%d ", arr[j]);}
        printf("\n")    ;
    */

    return 0;
}