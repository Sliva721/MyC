#include <stdio.h>

int main()
{
  int N,M;
  scanf("%d%d", &N,&M);
  // Массив
  int A[N][M];
  int i=0,j=0;
     for (int i = 0; i < N; ++i)
         scanf("%d", &A[i]);
     for (int j = 0; j < M; ++j) {
          scanf("%d", &A[j]);
          printf("%d",A[i][j]);}
          
  
  
  return 0;
}