//                                                       МАССИВЫ
// Стандартная функция загрузки  массива данными и вывода значений на экран

#include <stdio.h>

void print_array (int A [])
{
 for(int i=0; i < N ; ++i) 
               printf(" %d ", arr[i]);
               printf("\n");
}

int main() {

int N,i=0;
  scanf ("%d",&N);
   
    int arr[N];
        
        // Вывод значений на экран
        for(int i=0 ; i < N; ++i)
             scanf("%d", &arr[i]);
        for(int i=0; i < N ; ++i) 
               printf("%d ", arr[i]);
    return 0;
}