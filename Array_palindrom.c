//     МАССИВЫ

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) scanf("%d ", &arr[i]);

    for (int i = 0; i < N; i++) {
        if (arr[i] != arr[N - 1 - i])  //сравнение значений массива от краев к центру
        {
            printf("NO");
            return 0;
        }  // Я НИКАК НЕ ЗАПОМНЮ ВЫХОД ПО этой команде (херачу break)
    }
    printf("YES");
    return 0;
}