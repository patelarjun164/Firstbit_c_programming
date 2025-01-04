#include <stdio.h>
#include <string.h>

char *findDupCharArr(char *str)
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
    printf("-----final output   %s\n", str);
}

// void removeDuplicateChar(char* str){
//     int length = strlen(str);
//     char* dupChar = findDupCharArr(str);

// }

int main()
{
    char str[50];
    printf("enter string\n");
    scanf("%s", str);
    // if (fgets(str, sizeof(str), stdin))
    // {
    //     int len = strlen(str);
    //     if (str[len - 1] == '\n')
    //     {
    //         str[len - 1] = '\0';
    //     }
    // }

    findDupCharArr(str);
    return 0;
}