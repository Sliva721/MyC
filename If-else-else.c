#include <math.h>
#include <stdio.h>

int main() {
    int ax, ay, bx, by, A;
    scanf("%d%d%d%d", &ax, &ay, &bx, &by);
    // printf ("%d %d %d %d\n",ax,ay,bx,by);
    A = (pow(ax, 2) + pow(ay, 2)) - (pow(bx, 2) + pow(by, 2));
    // printf("%d\n",A);
    if (A > 0) {
        printf("2\n");
    } else {
        if (A < 0) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }
    return 0;
}