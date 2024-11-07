/*Функция нахождения факториала числа через РЕКУРСИЮ
*/

int factorial( int k) {
 if(k == 0 || k == 1)
    return 1;
    return factorial(k - 1) * k;
}
int main(void){
    int k;
    scanf("%d", &k);
    printf("%d",factorial(k));
    return 0;
}
