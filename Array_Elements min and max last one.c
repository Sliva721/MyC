//     МАССИВЫ
//     Напишите программу, выводящую на экран все элементы массива, которые меньше последнего элемента и больше первого элемента массива.

int main() {
    int N,i=0,k=0,c=0;
    scanf("%d",&N);
    int arr[N];
       for(int i=0 ; i < N; ++i)
         scanf("%d", &arr[i]);
 
    for(int i=0; i<N ; ++i) 
        if ((arr[i] < arr[N-1]) && (arr[0] < arr[i])) {
              printf("%d ", arr[i]); 
                  k++;  }
           if (k==0)
           printf("0");
    return 0;
}