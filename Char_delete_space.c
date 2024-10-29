/* {
   int a, b; // Объявление переменных a и b, которые будут использоваться для хранения символов
    b = 's'; // Инициализация переменной b символом 's'

    // Начало цикла, который будет выполняться, пока вводимые данные не равны константе EOF (конец файла)
    while ((a = getchar()) != EOF) 
    {
        // Если текущий символ не пробел ( ' ' ) или предыдущий символ (b) не является пробелом
        if (a != ' ' || b != ' ')
            putchar(a); // Вывод текущего символа на стандартный вывод
        
        b = a; // Обновление переменной b на текущий символ a, чтобы использовать её в следующей итерации
    }
    
     return 0;
} */

#include <stdio.h>
int main()
{
    int a,b;
    b ='q';
    while((a=getchar())!=EOF)
    {
        if(a!=' ' || b!=' ')
            putchar(a);
        b=a;
    }
 return 0;
}

