//#include <stdio.h>   // чтобы пользоваться функцией printf
//#include <stdlib.h>  // чтобы пользоваться функцией rand
// 
//int main(void) {
// генерируем пять случайных целых чисел меньших 100, т.е. с ограничением по верхней границе //
// printf("%d\n", rand()%54);
// printf("%d\n", rand()%54);
// printf("%d\n", rand()%54);
// printf("%d\n", rand()%54);
// printf("%d\n", rand()%54);

//  return,0;
//}

//А вот так это работает ограничение по нижней границе от 80 до 100 // 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // чтобы использовать функцию time()

int main(void) {
srand(time(NULL));

/* генерируем пять случайных целых чисел из отрезка [80; 100] */
  printf("%d\n", 50 + rand()%(100 - 50 + 1)); //формула: [A;B] = A + rand()%(B-A+1)
  printf("%d\n", 50 + rand()%(100 - 49));
  printf("%d\n", 50 + rand()%49);
  printf("%d\n", 50 + rand()%49);
  printf("%d\n", 50 + rand()%49);
}