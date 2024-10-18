#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    // printf ("%d %d %d %d\n",a,b,c,d);
    if ((a == 2 || a == 8 || a == 4) && (b == 2 || b == 8 || b == 4) && (c == 2 || c == 8 || c == 4)) {
        printf("open\n");
    } else {
        printf("closed\n");
    }
    return 0;
}