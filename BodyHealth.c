#include <stdio.h>
int main(void){

  int age, height, weight;
  double bov_m, bov_f;

  printf("Vash vozrast?(god)\n");
  scanf("%d", &age); // считываем целое значение в переменную age

  printf("Vash rost?(cm)\n");
  scanf("%d", &height); // считываем  значение в переменную height

  printf("Vash ves?(kg)\n");
  scanf("%d", &weight); // считываем значение в переменную weight

  bov_m = 10*weight + 6.25*height - 5*age + 5;
  bov_f = 10*weight + 6.25*height - 5*age - 161;
  printf("|       BMR       |\n");
  printf("|  male  | female |\n");
  printf("|%8.2f|%8.2f|\n",bov_m, bov_f);

  return 0;
   
   }
