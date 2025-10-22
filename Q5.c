#include <stdio.h>
int main()
{
    int arr1[5]={1,3,5,7,9};
    int arr2[5]={2,4,6,8,10};
    int arr3[10];
    int i, j=0, k=0;
    for(i=0; i<10; i++)
    {
        if(i%2==0)
        {
            arr3[i]=arr1[j];
            j++;
        }
        else
        {
            arr3[i]=arr2[k];
            k++;
        }
    }
    printf("Merged array:\n");
    for(i=0; i<10; i++)
    {
        printf("%d ", arr3[i]);
    }
}
