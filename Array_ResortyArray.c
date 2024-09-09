// Разделить массив на две части, поместив в первую элементы, большие среднего арифметического массива, 
// а во вторую — меньшие и равные среднему арифметическому.


#include <stdio.h>

int main()
{
     int N, sum = 0, i = 0;
     scanf("%d", &N);
     int Aarr[N];
     //    int Barr[N];
     // сканируем
     for (int i = 0; i < N; ++i)
          scanf("%d", &Aarr[i]);
     // среднее арифметическое
     for (int i = 0; i < N; ++i)
          sum = sum + Aarr[i];
     //            printf("%.2lf", (double) sum/N);
     //
     for (int i = 0; i < N; ++i)
          if (Aarr[i] > sum / N)
               printf("%d ", Aarr[i]);
     for (int i = 0; i < N; ++i)
          if (Aarr[i] <= sum / N)
               printf("%d ", Aarr[i]);

     return 0;
}