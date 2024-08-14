#include <stdio.h>
#include <math.h> // подключаем math.h
int main (void) {
  double alpha, sin_a, pi = 3.1415926;
 
  scanf("%lf",&alpha);
  alpha =  alpha*pi/180; 
  sin_a = sin(alpha);
  printf("%.2f\n", sin_a); 

  return 0;
}