/* Двоичная и десятичная Системы счисления
Дана строка, изображающая двоичную запись целого положительного числа. 
Вывести строку, изображающую десятичную запись этого же числа.

Sample Input :
1010110001101010

Sample Output :
44138
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

int convertBinaryDecimal(char str[], int a, int n) {
    a = 0;
     for(int i = 0; i < n; i++) { 
            if(str[n - i - 1] == '1') 
                a += pow(2, i);
            return a;
}
}

int main() {
      
    char str[20];
    int res = 0;
    while (scanf("%s", str) == 1) {
    int len = strlen(str); 
    convertBinaryDecimal(str, len, res);       
    }
        printf("%d", res);
     
    return 0;
}