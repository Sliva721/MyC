//                             Дубликаты
// Удалить из последовательности дубликаты.  (-87 -78 - 66 - 66 1 2 3 4 4 4  5 6 6 6 7 8 9 9  )
#include <stdio.h>


int main() {
         int N, n, p=-9999;
                scanf("%d", &N);
for (int c=0 ;  c <= (N-1); c++) {
     scanf("%d", &n);
                     if(n > p)
                            printf("%d ", n );   
                                    p=n;
}
  return 0;
}