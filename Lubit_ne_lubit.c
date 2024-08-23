#include <stdio.h>
#include <locale.h>
int main() {
  
  setlocale(LC_ALL, "");
  int k;
  scanf("%d",&k);
      switch (k%2) {
       case 0 : printf("Не любит\n"); break;
       case 1 : printf("Любит\n"); break;
      }
  return 0;
}