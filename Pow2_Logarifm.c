//                Степень двойки
// По данном числу N определить, является ли оно степенью числа 

#include <stdio.h>

#include <stdio.h>
#include <math.h>

        // Логарифмы - это жопа! Но ВСЁ, что связано со степенями сразу думай про "А*А" или Log2 (A). И помни, что значение Log всегда "float" or "double"

int main() {
    int N; //переменная из условия
        scanf("%d",&N);
     float logf; //временная ВЕЩЕСТВЕННАЯ переменная значения логарифма для расчетов в формате float
   logf = log2 (N); // вычисление логарифма числа N по основанию 2 (т.е. в какую степень надо возвести 2, чтобы получилось N)
   int logi; // //временная НАТУРАЛЬНАЯ переменная значения того же логарифма для расчетов в формате int 
           logi=logf; // приводим значение float в значение int 
     float L;
            L=logf-logi; // высчитываем разницу
           
    if (L==0){                                          // далее собственно решение задачи
          printf ("YES!"); }
    else{     
    printf ("NO!"); }
        
    return 0;
}