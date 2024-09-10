#include <stdio.h>

int main() {
    char symbol=65;
    int N,k=0,i=0,sum=0;
    int A[96]={0};
    scanf("%d",&N);
  //  printf ("%d\n",N);
    for (i=65;i<96;++i) {
    scanf(" %c",&A[i]);
        if (A[i] > 96) printf("%d ", A[i] - 32); 
    else { printf ("%d ",A[i]);}
    }
    
              
       
    return 0;
}