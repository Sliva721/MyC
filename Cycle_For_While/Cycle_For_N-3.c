//Усовершенствовать программу, написанную на прошлом шаге: дополнительно на отдельной строке вывести
//количество напечатанных чисел.

#include <stdio.h>

int main() {
    int K, M, c = 0;  // c - это вторая переменная, которая будет считать количество выводов на экран, т.е.
                      // количество натуральных чисел.
    scanf("%d%d", &K, &M);
    // printf("%d %d\n",K,M); // проверяем присвоение, тут часто ошибка...
    if (K < 1) K = 1;
    for (int i = K; i <= M; i++) {
        printf("%d ", i);  // вывод
        c = c + 1;
    }  //посчитали вывод (и всё вместе со строкой 12 это зациклили до значения М) // Можно использовать "c++"
    printf("\n%d ", c);

    return 0;
}