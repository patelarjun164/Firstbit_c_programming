#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    char longestStr[30] = "";
    char temp[30];
    int j = 0;

    printf("Enter String\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ')
        {
            temp[j] = str[i];
            temp[++j] = '\0';
            if (i == len - 1 && strlen(temp) > strlen(longestStr))
            {
                // temp[j+1] = '\0';
                strcpy(longestStr, temp);
            }
        }
        else
        {
            // temp[j] = '\0';
            if (strlen(temp) > strlen(longestStr))
            {
                strcpy(longestStr, temp);
            }
            strcpy(temp, "");
            j = 0;
        }
    }

    printf("Longest word in %s is %s with length %d\n", str, longestStr, strlen(longestStr));
    return 0;
}