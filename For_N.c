// Написать программу выводящую на экран первые N натуральных чисел.

#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);
    printf("%d\n", N);

    for (int i = 1; i <= N; i = i + 1)  // i=i+1 == i++ (а уж НИКАК НЕ: i=++) БЕСТОЛОЧЬ!!!!!
        printf("%d ", i);

    return 0;
}