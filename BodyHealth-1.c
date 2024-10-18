#include <stdio.h>
int main() {
    int age, height, weight;
    char gender;
    double m, f;

    scanf("%s %d%d%d", &gender, &age, &height, &weight);

    m = 10 * weight + 6.25 * height - 5 * age + 5;
    f = 10 * weight + 6.25 * height - 5 * age - 161;
    // printf("%.2f %.2f\n",m,f);
    switch (gender) {
        case 'm':
            printf("|  BMR  |\n");
            printf("|%-4.2f|\n", m);
            break;

        case 'f':
            printf("|  BMR  |\n");
            printf("|%-4.2f|\n", f);
            break;
        default:
            printf("ERROR!\n");
            break;
    }
    return 0;
}
