// Вывести все числа из промежутка [A;B],(B>A)[A;B],(B>A). При этом число A должно выводиться 1 раз, число
// A+1- два раза, A+2- три раза и т.д.

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++)
        for (int k = a; k <= i; k++) printf("%5d", i);
    return 0;
}