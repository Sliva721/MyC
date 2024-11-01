//Последовательность чисел Фибоначчи
// F n = F n-1 + F n-2, n ≥ 2.
// Чи́сла Фибона́ччи  — элементы числовой последовательности
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, …,
//в которой первые два числа равны 0 и 1, а каждое последующее число равно сумме двух предыдущих чисел:
// F3=F2+F1; F4=F3+F2......

#include <stdio.h>

int main() {
    int N, f1 = 0, f2 = 1, tmp;
    scanf("%d", &N);
    // printf("%d\n",N); // проверяем присвоение, тут часто ошибка...
    for (; N >= 0; N--) {
        // printf ("%d ",N);
        tmp = f1;
        f1 = f2;
        f2 = f2 + tmp;
    }
    printf("%d ", tmp);

    return 0;
}