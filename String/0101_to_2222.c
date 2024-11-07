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

int main() {
      
    char str[20];
    while (scanf("%s", str) == 1) {
    int res = 0;
    int len = strlen(str); 
    res = 0;
        for(int i = 0; i < len; i++) { 
            if(str[len - i - 1] == '1') 
                res += pow(2, i);
        }
        printf("%d", res);
  }    
    return 0;
}