/* Сортировка вставками
 */

#include <stdio.h>

/*Функция сортировки вставками по возрастанию
*/

void sortInsertArray(int n, int arr[]) {
    for (int i = 1; i < n; i++) {
        int k = i;
        while (k > 0 && arr[k - 1] > arr[k]) { // изменить условие по убыванию: (k > 0 && arr[k - 1] МЕНЬШЕ arr[k])
            int tmp = arr[k - 1];
            arr[k - 1] = arr[k];
            arr[k] = tmp;
            k -= 1;
        }
    }
}

void printArray(int n, int arr[]) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
}

int main() {
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sortInsertArray(n, arr);
    printArray(n, arr);
    return 0;
}