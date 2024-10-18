#include <stdio.h>

int main() {

int m = 0, n = 0;
scanf("%d%d", &m, &n);
int data[m][n];
for (int i = 0; i < m; i++)
{    for (int j = 0; j < n; j++)
    {
        scanf("%d", &data[i][j]);
    }
}
for (int i = 0; i < m; i++)
{    for (int j = 0; j < n; j++)
    {
        printf("%d ", data[i][j]);
    }
    printf("\n");
}

return 0;

}