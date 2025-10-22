#include <stdio.h>
int main()
{
    int i, length = 9, temp;
    int arr[] = {2, 3, 6, 8, 7, 11, 3, 5, 9};
    printf("Original array:\n");
    for(i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    for(i = 0; i < length / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = temp;
    }
    printf("\nReversed array:\n");
    for(i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
}
