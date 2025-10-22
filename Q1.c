#include<stdio.h>
int main() 
{
    int temp[5]={11,41,23,69,54}, i;
    int max = temp[0];
    int min = temp[0];
    for(i=1; i<5; i++) 
    {
        if(temp[i] > max) 
        {
            max = temp[i];
        }
        if(temp[i] < min) 
        {
            min = temp[i];
        }
    }
    printf("Hottest Day: %d\n", max);
    printf("Coldest Day: %d\n", min);
}
