//                                                           Сумма элементов
// Найти сумму элементов последовательности, расположенных между нулями.

#include <stdio.h>

int main() {
    int N=0,sum=0,k=0;
    scanf("%d",&N);

     while (N!=0) {
          scanf("%d",&N);
          k=N;
  //   printf ("k=%d\n", k); //проверяем какие значения будут  в цикле (гоним до k=0)
     }  
    do {
         scanf("%d",&N);
         sum=sum+N;
//printf ("N=%d\n sum=%d\n", N,sum); // проверяем 
      
    }
       while (N != 0); 
    
   printf ("%d", sum);        
                    
          
   return 0;
}