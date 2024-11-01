#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    // счётчики для сгенерированных чисел
    // если выпадет 0, то увеличим на единицу count_0
    // аналогично для count_1 и count_2
    int count_0 = 0, count_1 = 0, count_2 = 0;

    int rand_number;

    // i = 0 начинаем отсчёт с нуля
    // i < 100 повторяем, пока i меньше 100
    // i = i + 1 на каждом шаге увеличиваем счётчик на единицу
    // итого тело цикла выполнится 100 раз
    for (int i = 0; i < 1000; i = i + 1) {
        rand_number = rand() % 3;
        switch (rand_number) {
            case 0:
                count_0 = count_0 + 1;
                break;
            case 1:
                count_1 = count_1 + 1;
                break;
            case 2:
                count_2 = count_2 + 1;
                break;
        }
    }

    printf("0 - %d\n1 - %d\n2 - %d\n", count_0, count_1, count_2);
    return 0;
}