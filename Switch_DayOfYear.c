#include <stdio.h>

int main() {
    int m, d;
    scanf("%d%d", &m, &d);
    // printf("%d",(k+2)%366);
    switch (m) {
        case 1:
            printf("%d\n", 0 + d);
            break;
        case 2:
            printf("%d\n", 31 + d);
            break;
        case 3:
            printf("%d\n", 59 + d);
            break;
        case 4:
            printf("%d\n", 90 + d);
            break;
        case 5:
            printf("%d\n", 120 + d);
            break;
        case 6:
            printf("%d\n", 151 + d);
            break;
        case 7:
            printf("%d\n", 181 + d);
            break;
        case 8:
            printf("%d\n", 212 + d);
            break;
        case 9:
            printf("%d\n", 243 + d);
            break;
        case 10:
            printf("%d\n", 273 + d);
            break;
        case 11:
            printf("%d\n", 304 + d);
            break;
        case 12:
            printf("%d\n", 334 + d);
            break;
    }
    return 0;
}