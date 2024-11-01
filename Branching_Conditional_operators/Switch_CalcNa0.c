#include <stdio.h>

int main() {
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+':
            printf("%.2f\n", (float)a + b);
            break;
        case '-':
            printf("%.2f\n", (float)a - b);
            break;
        case '*':
            printf("%.2f\n", (float)a * b);
            break;
        case '/':
            switch (b) {
                case 0:
                    printf("ERROR!\n");
                    break;
                default:
                    printf("%.2f\n", (float)a / b);
                    break;
            }
            break;
        default:
            printf("ERROR!\n");
            break;
    }
    return 0;
}