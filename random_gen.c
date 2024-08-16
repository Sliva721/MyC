#include <stdio.h>   // чтобы пользоваться функцией printf
#include <stdlib.h>  // чтобы пользоваться функцией rand
 
int main(void) {
/* генерируем пять случайных целых чисел меньших 100 */
  printf("%d\n", rand()%54);
  printf("%d\n", rand()%54);
  printf("%d\n", rand()%54);
  printf("%d\n", rand()%54);
  printf("%d\n", rand()%54);
}