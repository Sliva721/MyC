//   По заданному числу N сформировать матрицу (N×N)
//          1 2 3 4    1
//          2 1 2 3      1
//          3 2 1 2        1
//          4 3 2 1          1

#include <stdio.h>
#define MAX_ARR_SIZE 10
int main() {
    int n, arr[MAX_ARR_SIZE][MAX_ARR_SIZE];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        for (int j = i; j < n; ++j) arr[i][j] = arr[j][i] = 1 + (j - i);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}