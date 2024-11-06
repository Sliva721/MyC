/*Функция нахождения факториала числа
*/

#include <stdio.h>

int factorial(int k){
    int F = 1;
    if (k <= 0) k = 1;
    for (; k > 0; k--) 
    F = F * k;
       return F;
}
int main(void){
    int k;
    scanf("%d", &k);
    factorial(k);
    printf("%d", factorial(k));
    return 0;
}
