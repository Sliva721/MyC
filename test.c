#include <stdio.h>
#include <math.h> // подключаем math.h
int main (void) {
  int a, b, c2;

  scanf("%d",&a);
  scanf("%d",&b);
	
  c2 =  a*a + b*b;
  printf("c = %.2f\n", sqrt(c2)); 

  return 0;
}