// Транспонирование
//                                         Для заданной матрицы вывести на экран транспонированную матрицу.

#include <stdio.h>

int main() {
    int N, M;
    scanf("%d%d", &N, &M);

    //
    int A[N][M];
    int i, j;
    for (i = 0; i < N; ++i)        //
        for (j = 0; j < M; ++j) {  //    СЧИТЫВАЕМ (scanf) ЗНАЧЕНИЯ ПОСТРОЧНО
            scanf("%d", &A[i][j]);
        }  //

    for (j = 0; j < M; ++j) {        //
        for (i = 0; i < N; ++i)      //   ВЫВОДИМ НА ЭКРАН СТОЛБЦЫ но в СТРОКИ
            printf("%d ", A[i][j]);  //
        printf("\n");
    }

    return 0;
}