#include <stdio.h>

int main() {
  
  int a,b;
  char rez;   
  scanf("%c%d%d",&rez,&a,&b);
   
       switch (rez) {
       case '+' : printf("%.2f\n",  (float)a+b); break;
       case '-' : printf("%.2f\n", (float)a-b); break;
       case '*' : printf("%.2f\n", (float)a*b); break;
       case '/' : printf("%.2f\n", (float)a/b); break;
       default  : printf("ERROR!\n");break;
      }
  return 0;
}