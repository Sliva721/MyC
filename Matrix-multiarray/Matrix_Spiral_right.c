/*  Змейка
    Для заданных чисел N M сформировать матрицу, заполненную по спирали 
    числами от 1 до M⋅N.
    
Входные данные:
Два натуральных числа M и N. 
M и N не превышают 10.

Выходные данные:
Вывести на экран массив M на N, указанного вида. 
Формат вывода каждого числа 3 знака на число, выравнивание по правому краю.
    */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;

    scanf("%d%d", &n, &m);
    int **a = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        a[i] = (int *)malloc(m * sizeof(int));
    }

    int iStart = 0, iBord = 0, jStart = 0, jBord = 0;

    int k = 1;
    int i = 0;
    int j = 0;

    while (k <= n * m)
    {
        a[i][j] = k;
        if (i == iStart && j < m - jBord - 1)
            ++j;
        else if (j == m - jBord - 1 && i < n - iBord - 1)
            ++i;
        else if (i == m - iBord - 1 && j > jStart)
            --j;
        else
            --i;

        if ((i == iStart + 1) && (j == jStart) && (jStart != m - jBord - 1))
        {
            ++iStart;
            ++iBord;
            ++jStart;
            ++jBord;
        }
        ++k;
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; ++i)
    {
        if (a[i])
        {
            free((int *)a[i]);
        }
    }
    if (a)
    {
        free(a);
    }

    return 0;
}