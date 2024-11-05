/*Слова псевдо-палиндромы.
Выбрать извходящего потока слова, которыеначинаются и оканчиваются на однуи ту же букву
и вывести их на экран.

Sample Input:
youngcoder.ru tnt and ten fiaif ug.ru

Sample Output:
tnt fiaif ug.ru 
*/

#include <stdio.h>

int main() {

    char str[100];
    while (scanf("%s", str) == 1) {
     int len = strlen(str); 
      if (len > 0) {
       if (str[0] == str[len - 1]) {
                printf("%s ", str);
            }
        }
    }
    return 0;
}