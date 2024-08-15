#include <stdio.h>
int main (void) {
  int x=2,N,res; //значение N подается на вход

  scanf("%d",&N);
  //printf("%d %d\n", x,N); //проверка значения 
  res=pow (x,N);
  printf("%d", res); //проверка значения 
  return 0;
}