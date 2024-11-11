#include <stdio.h>

int main() {
    int n,  sum = 0;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; ++i) scanf("%d", &arr[i]), sum += arr[i];

    int average = sum / n, cnt, k = 0;
    // swaping algorithm - модификация алгоритма пузырьковой сортировки
    do {
        cnt = 0;
        k++;
        for (int i = 0; i < n - k; i++)
            if (arr[i] <= average && arr[i + 1] > average) {
                int tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;  // swap
                cnt++;
            }
    } while (cnt);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}