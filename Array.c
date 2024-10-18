///                    МАССИВЫ (вводное занятие)

#include <stdio.h>
#define N 20  // заранее определяю размер массива

int main() {
    int M[N] = {0};

    for (int i = 0; i < N;
         ++i)  // При инициализации массива с нулями, этот цикл заполнит все элементы массива цифрами:
        // M[i] = i;  // от 1 до конца массива
        M[i] = N - i - 1;  //ревнрс заполнения - от последнего значения к первомуЖ

    for (int i = 0; i < N; ++i) printf(" %d ", M[i]);

    return 0;
}