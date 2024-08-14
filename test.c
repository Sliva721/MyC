#include <stdio.h>
#include <math.h> // подключаем math.h
int main (void) {
  int a, b, c2;

  printf("Vvesti dlinnu 1 kateta = \n");
  scanf("%d",&a);
  printf("Vvesti dlinnu 2 kateta = \n");
  scanf("%d",&b);
	c2 =  a*a + b*b;
 printf("c = %.2f\n", sqrt(c2)); 

  return 0;
}