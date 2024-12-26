#include <stdio.h>
#include <string.h>

int countVowels(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            count++;
        }
        str++;
    }
    return count;
}

int main()
{
    char str[30];
    printf("Enter string\n");
    scanf("%s", str);

    printf("No of vowels %d\n", countVowels(str));
    return 0;
}