//                             Экспонента с заданной точностью
//   Вычислить число e с точностью ε

#include <stdio.h>

int main() {
    double e, s = 1, f = 1, i = 1;
    scanf("%lf", &e);
    while ((1 / f) > e) {
        f = f * i;
        s = s + 1 / f;
        i++;
    }
    printf("%.8lf", s);
    return 0;
}