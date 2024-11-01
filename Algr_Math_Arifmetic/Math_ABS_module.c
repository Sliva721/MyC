#include <math.h>
#include <stdio.h>
int main() {
    int x1, x2, res;  // x1= -39; X2=62
    scanf("%d %d", &x1, &x2);
    res = fabs(x2 - x1);
    printf("%d\n", res);  // verniy rezultat = 101
    return 0;
}