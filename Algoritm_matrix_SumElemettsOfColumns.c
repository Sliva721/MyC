//                Столбцы
// Для заданной матрицы посчитать сумму элементов каждого столбца.
// Два натуральных числа  N и M.
// Первой вывести сумму последнего столбца, второй предпоследнего и т.д.
// Sample Input:
//          3 4
//          1 2 3 4
//          1 3 4 5
//          0 2 3 -2

#include <stdio.h>

int main() {
    int N, M, a = 0;
    scanf("%d%d", &N, &M);
    //         printf ("%d %d\n",N,M);
    int A[N][M];
    int B[M];
    int i, j;
    for (i = 0; i < N; ++i)
        for (j = 0; j < M; ++j) {
            scanf("%d", &A[i][j]);
        }

    for (j = 0; j < M; ++j) {
        for (i = 0; i < N; ++i) a += A[i][j];
        //                printf("a=%d \n",a);
        B[j] = a;
        //                                 printf("B[j]=%d \n",B[j]);

        a = 0;

        for (j = M - 1; j >= 0; j = j - 1) printf("%d ", B[j]);

        return 0;
    }