#include <stdio.h>
#include <string.h>

char* mystrrev(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len/2; i++)
    {
        char temp  = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
    return str;
}

int main()
{
    char str[50];
    printf("Enter a string 1 upto 50 chars:\n");
    scanf("%s", str);

    printf("%s", mystrrev(str));
    return 0;
}