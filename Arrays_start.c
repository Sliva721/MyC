///                    МАССИВЫ (вводное занятие)

#include <stdio.h>
#define N 20  // заранее определяю размер массива

int main() {
    int arr[N] = {0};

    for (int i = 0; i < N;
         i++)  // При инициализации массива с нулями, этот цикл заполнит все элементы массива цифрами:
        // M[i] = i;  // от 1 до конца массива
        arr[i] = N - i - 1;  //ревeрс заполнения - от последнего значения к первому

    for (int i = 0; i < N; i++) printf("%d ", arr[i]);

    return 0;
}
