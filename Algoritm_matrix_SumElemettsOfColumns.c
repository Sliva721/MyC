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

#include <stdio.h>

int main() {
    int n, m ;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);

    }

    for (int j = m-1; j >= 0; j--){
        int column = 0;
        for (int i = 0; i < n; i++)
            column += arr[i][j];
        printf("%d ", column);

    }

    return 0;
}