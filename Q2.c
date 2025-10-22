#include<stdio.h>
int main()
{
    float powerusage[8]={23.4, 45.6, 12.3, 67.8, 34.5, 78.9, 56.7, 89.0}, total=0.0, average;
    int i;
    for(i=0; i<8; i++)
    {
        total = total + powerusage[i];
    }
    average = total / 8;
    printf("Total Power Usage: %.2f\n", total);
    printf("Average Power Usage: %.2f\n", average);
}
