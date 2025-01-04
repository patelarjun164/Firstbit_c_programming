#include <stdio.h>
#include <string.h>

char* removeDupCharArr(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        int j = i + 1;
        while (j < len)
        {
            if (str[j] == str[i])
            {
                for (int k = j; k < len; k++)
                {
                    str[k] = str[k + 1];
                }
                len--;
            }
            else
            {
                j++;
            }
        }
        str[len] = '\0';
    }
    return str;
}

int main()
{
    char str[50];
    printf("enter string\n");
    scanf("%s", str);

    printf("---Before---\n");
    printf("%s\n", str);
    printf("---After---\n");
    printf("%s\n", removeDupCharArr(str));
    return 0;
}