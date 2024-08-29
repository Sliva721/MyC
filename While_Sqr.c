#include <stdio.h>

int main() {
  int N;
    scanf("%d", &N);
  
 int sq = 1 ;
   while(sq*sq <= N){
    printf ("%d ", sq * sq);
    sq++;
  }             
   return 0; 

}