 //Усовершенствуйте программу, написанную на прошлом шаге. Теперь необходимо вывести все натуральные числа 
 // из промежутка [K,M],(K<M)

#include <stdio.h>

int main() {
    int K,M;
  scanf("%d%d", &K,&M);
 // printf("%d %d\n",K,M); // проверяем присвоение, тут часто ошибка...
  if (K<1)
         K=1; 
 for (int i=K;i<=M;i++) // НЕ ЗАБУДЬ i++ == i=i+1 (i=++ - "ЭТО ЛАЖА!!!!!")
    printf("%d ",i);
    
    return 0;
}