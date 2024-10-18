//     МАССИВЫ
//       Вывести сначала чётные элементы массива, а затем нечётные.

#include <stdio.h>

int main() {
    int N, i = 0, chet, nechet;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; ++i) scanf("%d", &arr[i]);
    for (int i = 0; i < N; ++i)
        if (arr[i] % 2 == 0) printf("%d ", arr[i]);
    for (int i = 0; i < N; ++i)
        if (arr[i] % 2 == 1) printf("%d ", arr[i]);

    return 0;
}