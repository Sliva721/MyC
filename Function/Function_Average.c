#include <stdio.h>
// Функция среднего значения.
float average(int a, int b, int c) { 
    return (a + b + c) / 3; 
    }

int main() {
    int a = 0, b = 0, c = 0;
    if (scanf("%d%d%d", &a, &b, &c) != 3) {
        printf("n/a\n");
         }
      else {
         printf("Среднее значение: %0.2f\n",  average(a, b, c));  // Запуск функции непосредственно в Выводе результата.
      }
    return 0;
}

