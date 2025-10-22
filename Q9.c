#include <stdio.h>
#include <string.h>
int main() {
    char arr[] = "My name is Wajeeh. I study in FAST University";
    int maxLen = 0, len = 0, start = 0, maxStart = 0, i;
    for (i = 0; ; i++) 
	{
        if (arr[i] != ' ' && arr[i] != '\0')
        {
		len++;
	    }
        else 
		{
            if (len > maxLen) 
			{ 
			maxLen = len;
			maxStart = start;
			}
            if (arr[i] == '\0') 
			break;
            len = 0; 
			start = i + 1;
        }
    }
    printf("Sentence: %s\n", arr);
    printf("Longest word: ");
    for (i = maxStart; i < maxStart + maxLen; i++) printf("%c", arr[i]);
    printf("\nLength: %d\n", maxLen);
    return 0;
}
