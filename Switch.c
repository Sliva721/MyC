#include <stdio.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL, "");
  char s;
  scanf("%s",&s);

  switch (s) {
    case 'l' : printf("1. коня потеряешь, себя спасёшь!\n"); break;
    case 'r' : printf("2. и себя и коня потеряешь!\n");  break;
    case 'f' : printf("3. себя потеряешь, коня спасёшь!\n"); break;
  }

  return 0;
}
