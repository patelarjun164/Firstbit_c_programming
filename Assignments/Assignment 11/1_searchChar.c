#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *findChar(char *str, char c)
{
    while (*str != '\0')
    {
        if (*str == c) return str;
        str++;
    }
    return 0;
}

int main()
{
    char* str = (char*)(malloc(sizeof(char)*30));
    char c;
    printf("Enter string\n");
    // fgets(str, sizeof(str), stdin);
    scanf("%s", str);

    printf("Enter a charracter you want to find\n");
    fflush(stdin);
    scanf("%c", &c);

    char *ptr = findChar(str, c);
    ptr ? printf("%c found at index %d\n", c, ptr - str) : printf("%c not found!!\n", c);
    return 0;
}