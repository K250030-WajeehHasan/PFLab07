#include <stdio.h>
int main() {
    int readings[] = {7, 14, 21, 28, 35}, i;
    int n = sizeof(readings) / sizeof(readings[0]);
    int last = readings[n - 1];
    for (i = n - 1; i > 0; i--) readings[i] = readings[i - 1];
    readings[0] = last;
    printf("Array after rotation: ");
    for (i = 0; i < n; i++) printf("%d ", readings[i]);
    printf("\n");
    return 0;
}
