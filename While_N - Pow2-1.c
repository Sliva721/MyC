#include <stdio.h>
#include <math.h>

int main()
{
    int N, k = 1;
    scanf("%d", &N);
    while(pow(2, k) <= N && N > 1)
        printf("%d ", k++);
    return 0;
}