//Для заданного числа N проверить, является ли оно простым.
//Решение из предыдущей задачи, с одним усовершенствованием:
//У простого числа 2 делителя:единица и само число.Поэтому,просто скопируйте прошлую задачу и после цикла for напишите,
//что если кол-во делителей равно 2,то ответ 1,иначе пишется 0.

#include <stdio.h>

int main() {
    int N,d=0; // N - заданное число // d - количество делителей
    scanf("%d",&N);
 
 for (int i=1;i<=N;i++) { //цикл: начинаем с 1; счетчик меньше или равен N заданному числу; увеличиваем счётчик на 1
        if ((N%i)==0) {  //условие в теле цикла: если //(N%i)==0) - деление с остатком, где остаток ноль 
            d++;  //то такой делитель добавляется к общему количеству (сумме) таких делителей.
            //printf("%d ",i);  } // и  выводим значение счётчика (собственно найденный делитель) на экран.
 }
    if (d==2) {               //////ВОТ ОНО!!!!!!
         printf("1");}
        else {                                  //ВСЁ ЭТО ЗА ЦИКЛОМ!
            printf("0");}
    return 0;
}
}