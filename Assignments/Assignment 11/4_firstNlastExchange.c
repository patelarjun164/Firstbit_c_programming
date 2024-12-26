#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *exchangeFirstNLast(char *str)
{
    char* ptr = (char*)(malloc(sizeof(char)*strlen(str)));
    int len = strlen(str), i;
    for (i = 0; i < len; i++)
    {
        if(i==0) ptr[len-1] = str[i];
        else if(i==len-1) ptr[0] = str[i];
        else ptr[i] = str[i];
    }
    ptr[i]='\0';
    return ptr;
}

int main()
{
    char str[30];
    printf("Enter string\n");
    scanf("%s", str);

    printf("%s",exchangeFirstNLast(str));
    return 0;
}