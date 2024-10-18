#include <stdio.h>
// пока не работает
// Функция для проверки, является ли число простым
int is_prime(int n)
{
    if (n <= 1)
        return 0; // 0 и 1 не простые числа
    for (int i = 2; i < n; i++)
    {
        int temp = n;
        while (temp > 0)
        {
            int count = 0;
            int j = i;
            while (j <= temp)
            {
                temp -= j; // Реализация деления через вычитание
                count++;
            }
            if (count == 1)
            {
                break;
            }
            temp = n; // Сброс temp для следующей проверки
        }
    }
    return 1; // Если все проверки прошли, число простое
}

// Функция для нахождения наибольшего простого делителя
int largest_prime_factor(int A)
{
    int largest_prime = 1;
    for (int i = 2; i <= A; i++)
    {
        if (A > 0 && A - i >= 0 && is_prime(i))
        {
            int tempA = A;
            while (tempA >= i)
            {
                tempA -= i; // Реализация деления через вычитание
            }
            if (tempA == 0)
            {                      // i делит A
                largest_prime = i; // Обновляем наибольший простое число
            }
        }
    }
    return largest_prime;
}

int main()
{
    int A=0;
    printf("Введите целое число A: ");
    scanf("%d", &A);

    int result = largest_prime_factor(A);
    printf("Наибольший простой делитель числа %d: %d\n", A, result);

    return 0;
}