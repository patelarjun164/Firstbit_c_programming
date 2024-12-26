#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceA(char *str)
{
    char* ptr = (char*)(malloc(sizeof(char)*strlen(str)));
    char* temp = ptr;
    while (*str != '\0')
    {
        if(*str=='a') *ptr = '$';
        else *ptr = *str;
        ptr++;
        str++;
    }
    *ptr = '\0';
    return temp;
}

int main()
{
    char str[30];
    char c;
    printf("Enter string\n");
    // fgets(str, sizeof(str), stdin);
    scanf("%s", str);

    printf("%s",replaceA(str));
    return 0;
}