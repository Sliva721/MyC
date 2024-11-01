#include <stdio.h>

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    // Массив
    int arr[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) scanf("%d", &arr[i][j]);
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}