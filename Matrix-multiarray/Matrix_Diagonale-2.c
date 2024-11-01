/* Для заданной квадратной матрицы A[N] посчитать следующие величины:
   сумму элементов, находящихся над главной диагональю
   сумму элементов, расположенных под побочной диагональю */

#include <stdio.h>

int main() {
    int N, res_g = 0, res_p = 0;
    scanf("%d", &N);
    //   printf ("%d\n",N);
    int A[N][N];
    int i, j;
    for (i = 0; i < N; ++i)
        // {
        for (j = 0; j < N; ++j)
            //{
            scanf("%d ", &A[i][j]);
    //                  printf("%d ", A[i][j]);}
    //                    printf("\n");   }

    for (i = 0; i < N; ++i)
        for (j = 0; j < N; ++j) {
            if (i < j) res_g += A[i][j];
        }
    //                                 printf("res_g=%d\n", res_g);
    for (i = 0; i < N; ++i)
        for (j = 0; j < N; ++j) {
            if (j > N - 1 - i) res_p += A[i][j];
        }
    //                             printf("res_p=%d\n", res_p);
    if (res_g <= res_p)
        printf("%d %d", res_g, res_p);
    else {
        printf("%d %d ", res_p, res_g);
    }

    return 0;
}