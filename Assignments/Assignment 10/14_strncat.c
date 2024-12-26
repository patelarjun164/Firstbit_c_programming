#include <stdio.h>
#include <string.h>

char *mystrcat(char *str, char *str2, int n)
{
    int len1 = strlen(str);
    int len2 = strlen(str2);
    int i;
    for (i = len1; i < len1 + n; i++)
        str[i] = str2[i-len1];
    str[i] = '\0';
    // char *temp = str;
    // str = str + strlen(str);
    // while (*str2 != '\0')
    // {
    //     *str = *str2;
    //     str2++;
    //     str++;
    // }
    // *str = '\0';
    // printf("%s \n", str);
    return str;
}

int main()
{
    char str[50], str2[50];
    printf("Enter a string 1 upto 50 chars:\n");
    scanf("%s", str);
    printf("Enter a string 2 upto 50 chars:\n");
    scanf("%s", str2);

    int n;
    printf("Enter value of n\n");
    scanf("%d", &n);
    printf("%s \n", mystrcat(str, str2, n));
    return 0;
}