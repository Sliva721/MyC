// проверить простые числа - часть 2
#include <stdio.h>

int main() {
 int n, counter = 0;
 scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			counter++;
		}
	}
	printf("%d", counter == 2);
	  return 0;
    
}