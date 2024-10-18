#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "");
    int age;
    scanf("%d", &age);

    if (age <= 6) printf("дошкольник");
    if (age >= 7 && age <= 18) printf("школьник");
    if (age >= 19 && age <= 59) printf("рабочий");
    if (age >= 60) printf("пенсионер");

    return 0;
}