#include <stdio.h>
int main() {
    char arr1[] = "ProgrammingFundamental";
    char arr2[] = "ProgrammingFundamental";
    int i = 0, equal = 1;
    while (arr1[i] != '\0' && arr2[i] != '\0') 
	{
        if (arr1[i] != arr2[i]) 
		{ 
		equal = 0; 
		break; 
		}
        i++;
    }
    if (equal && arr1[i] == '\0' && arr2[i] == '\0')
        printf("Strings are equal.\n");
    else
        printf("Strings are NOT equal.\n");
    return 0;
}
