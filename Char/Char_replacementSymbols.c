/*Напишите программу, копирующую вводимые символы в выходной поток с заменой
символа табуляции на \t, символа забоя на \b и каждой обратной наклонной черты на \\. Это сделает
видимыми все символы табуляции и забоя.*/

#include <stdio.h>

int main()
{
    int a;

    while((a=getchar())!= EOF){
        if(a == '\t'){
           printf("\\t");}
       else
            if(a == '\b'){
           printf("\\b");}
       else
        if(a == '\\'){
            printf("\\");}
            else {
            putchar(a);}

    }

 return 0;
}