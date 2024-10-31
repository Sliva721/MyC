#include <stdio.h>

int main() {
    int n = 0, m = 0;
    if ((scanf("%d%d", &n, &m)) != 2 || n < 0 || m < 0) printf("n/a");

    int data[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) scanf("%d", &data[i][j]);
    }
    /* for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++)
             printf("%d ", data[i][j]);
              printf("\n");

   }
   */
   int minsum = 0, maxsum = 0, min_index = 0, max_index = 0;
    
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++)
        sum += data[i][j];
          
        if (i < 1 || sum > maxsum) {
        maxsum = sum;
        max_index = i;
        }

        if (i < 1 || sum < minsum) {
        minsum = sum;
        min_index = i;
    }
    printf("minindex = %d maxindex = %d\n", min_index, max_index);
    }
    
    for (int j = 0; j < m; j++) {
        int tmp = data[min_index][j];
        data[min_index][j] = data[max_index][j];
        data[max_index][j] = tmp;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) printf("%d ", data[i][j]);
        printf("\n");
     }

    return 0;
}
