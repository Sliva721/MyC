//   По заданному числу N сформировать матрицу (N×N) 
//          1 2 3 4    1
//          2 1 2 3      1
//          3 2 1 2        1
//          4 3 2 1          1


#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);
    int A[N][N];
    for (int i = 0;i < N; i++) {
          for (int j = 0;j < N; j++) {
                  A[i][j]=1+abs(j-i);
  
        printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}