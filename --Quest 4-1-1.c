// найти все делители - 1 часть 
#include <stdio.h>

int main() {
    int n, d = 0;
    scanf("%i", &n);
    for(int a = 1; a<=n; a++) {
        for(int b = 1; b<=n; b++){
        int c = a*b;
            if(c==n){
            printf("%i ", a);
                d++;
            }
        }    
    }
    printf("\n%i ", d); 
    return 0;
}