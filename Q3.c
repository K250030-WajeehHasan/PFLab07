#include <stdio.h>

int main() {
    int n, i, j, value;
    printf("Enter number of readings: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter readings:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to delete: ");
    scanf("%d", &value);

    for (i = 0; i < n; i++) {
        if (arr[i] == value) {
            for (j = i; j < n - 1; j++)
                arr[j] = arr[j + 1];
            n--;
            i--; 
        }
    }

    printf("Array after deletion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
