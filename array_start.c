///                    МАССИВЫ (вводное занятие)

#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; ++i) scanf("%d", arr + i);
    for (int i = n - 1; i >= 0; --i)  // Вывод реверсом
        printf("%d ", arr[i]);        //  в обратном порядке.

    return 0;
}