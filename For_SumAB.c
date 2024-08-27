// Программа, которая выводит на экран сумму натуральных чисел из промежутка [A;B]. Числа A и B (B>A) вводятся пользователем.

#include <stdio.h>

int main(void) {

  int a = 0, b = 0;
  scanf("%d %d", &a, &b);

  // сюда будем записывать результат
  int sum = 0;
  
  
  // k++ эквивалентно k = k + 1, но короче
  // ++ оператор инкремента
  
  for (int k = a; k <= b; k++){
    sum = sum + k;
    // на каждой итерации добавляем к уже имеющейся сумме
    // очередное число
  }

  printf("%d\n", sum);

  return 0;
}