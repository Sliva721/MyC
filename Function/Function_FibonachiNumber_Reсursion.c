/*Функция "Числа Фибоначчи" РЕКУРСИВНО
 */

int fib(int a) {
    if(a <= 1) return a;
    return fib(a - 1) + fib(a - 2);
    
}

int main(void){
    int a = 0;
    scanf("%d", &a);
    printf("%d", fib(a));
    
    return 0;
}