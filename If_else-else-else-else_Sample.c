#include <stdio.h>
#include <locale.h>

int main() {
 setlocale(LC_ALL, "");   
 int Y;
    scanf("%d", &Y);
    if (Y>0&&Y<7) {
    printf("дошкольник");}
    	else 
            if (Y>6&&Y<19) {
                printf("школьник");}
			    	else 
                      if (Y>18&&Y<60) {
                        printf("рабочий");}
else {
    printf("пенсионер");}

    return 0;
}     
