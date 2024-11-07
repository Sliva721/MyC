/*Функция перевода числа из Двоичной в десятичную Системы счисления
*/


int convertBinaryDecimal(char str[], int a, int n) {
    a = 0;
     for(int i = 0; i < n; i++) { 
            if(str[n - i - 1] == '1') 
                a += pow(2, i);
            return a;
}
}