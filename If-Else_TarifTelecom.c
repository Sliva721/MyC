#include <stdio.h>

int main() {
  int T,t2,tarif=350;
    scanf("%d",&T);
  t2=(T-500)*2;
  //  printf("%d\n %d\n", T,t2);
    if (T<=500)
        printf("%d",tarif);
        else {
            printf("%d%",tarif+t2);}
      
    
  return 0;
}