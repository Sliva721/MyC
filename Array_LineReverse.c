//             По заданному числу N сформировать матрицу (N×N) следующего вида:
//     1 2 3 4 5....
//     5 4 3 2 1 ... 
//     1 2 3 4 5 ... 
//     5 4 3 2 1  и т.д. 


#include <stdio.h>

int main() {
 int N; //(N - любое число, и матрица будет равна 4х4; 6х6; 10х10 и т.д.)
    scanf ("%d",&N);

       int A[N][N];
         int i, j;
       for (int i = 0; i < N; ++i) {
                for(int j = 0; j < N; ++j) {
                      if (i%2==0) {
                          A[i][j]=j+1;}
                    else {
                          A[i][j]=N-j;}
           
                printf("%d ", A[i][j]);
                               } 
            printf("\n");
    }

   return 0;
}