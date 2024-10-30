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
    
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    
    int arr[n][m];
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);
    }

    int max = 0, min = 0;
    int min_index = 0, max_index = 0;
 
        for (int k = 0; k < m; k++) {
        int sum = 0;
        for (int i = 0; i < n; i++)    // находим сумму
            sum += arr[i][k];
 
        if (k < 1 || sum > max) {  // если считаем сумму в первый раз или она больше уже найденной !!!
            max = sum;
            max_index = k;
        }
 
        if (k < 1 || sum < min) { // то же самое для минимума
            min = sum;
            min_index = k;
        }
    }
        for (int i = 0; i < n; i++){
            int temp = arr[i][min_index];
            arr[i][min_index] = arr[i][max_index];
            arr[i][max_index] = temp;
    }
 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
 
    return 0;
}