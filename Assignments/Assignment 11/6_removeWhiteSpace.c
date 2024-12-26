#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceWhiteSpace(char *str)
{
    char* ptr = (char*)(malloc(sizeof(char)*strlen(str)));
    char* temp = ptr;
    while (*str != '\0')
    {
        if(*str==' ') *ptr = '_';
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
    printf("Enter string\n");
    fgets(str, sizeof(str), stdin);
    // scanf("%s", str);

    printf("%s\n",replaceWhiteSpace(str));
    //heap should be free after use
    return 0;
}