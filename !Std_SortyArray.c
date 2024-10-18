#include <stdio.h>

int main() {
    int n, m[100], sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &m[i]), sum += m[i];

    int average = sum / n, cnt, k = 0;
    // swaping algorithm - модификация алгоритма пузырьковой сортировки
    do {
        cnt = 0;
        ++k;
        for (int i = 0; i < n - k; ++i)
            if (m[i] <= average && m[i + 1] > average) {
                int tmp = m[i];
                m[i] = m[i + 1];
                m[i + 1] = tmp;  // swap
                ++cnt;
            }
    } while (cnt);
    for (int i = 0; i < n; ++i) printf("%d ", m[i]);
    return 0;
}