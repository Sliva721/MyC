#include <math.h>
#include <stdio.h>

int main() {
    double a, b, pi = 3.141593, alpha, sin_a, s;  //значения a, b, alpha подаются на вход программы
    scanf("%lf%lf%lf", &a, &b, &alpha);
    // printf("%.2lf %.2lf %.2lf\n",a,b,alpha); //проверка значения
    alpha = alpha * pi / 180;  //переводим в радианы
                               // printf("%.2lf\n",alpha); //проверка значения
    sin_a = sin(alpha);        // sin alpha
    // printf("%.20lf\n",sin_a);//проверка значения
    s = (a * b * sin_a) / 2;  //формула площади треуголника
    printf("%.2lf\n", s);     //проверка значения

    return 0;
}
