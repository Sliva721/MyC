#include <stdio.h>

int main() {
    int N, M, res_g = 0, a, b, c, d;
    scanf("%d%d", &N, &M);
    //         printf ("%d %d\n",N,M);
    int A[N][M];
    int i, j;
    for (i = 0; i < N; ++i)
        // {
        for (j = 0; j < M; ++j) {
            scanf("%d", &A[i][j]);
            //               printf("%d ", A[i][j]);
        }
    //                  printf("\n");
    //            }

    for (i = 0; i < N; ++i)
        for (j = 0; j < M; ++j) {
            if (j == M - 1) res_g += A[i][j];
            d = res_g;
        }
    //                           printf("d=%d \n",d);}
    //  printf("d=%d\n",d);
    res_g = 0;
    for (i = 0; i < N; ++i)
        for (j = 0; j < M; ++j) {
            if (j == M - 2) res_g += A[i][j];
            c = res_g;
        }

    // printf("c=%d\n",c);
    res_g = 0;
    for (i = 0; i < N; ++i)
        for (j = 0; j < M; ++j) {
            if (j == M - 3) res_g += A[i][j];
            b = res_g;
        }

    // printf("b=%d\n",b);
    res_g = 0;
    for (i = 0; i < N; ++i)
        for (j = 0; j < M; ++j) {
            if (j == M - 4) res_g += A[i][j];
            a = res_g;
        }
    // printf("a=%d\n",a);
    printf("%d %d %d %d", d, c, b, a);

    return 0;
}