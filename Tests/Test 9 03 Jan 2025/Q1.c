#include <stdio.h>
#include <string.h>

char *findDupCharArr(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        int count=0;
        printf("1.1  \n");
        for (int j = i+1; j < len; j++)
        {
            printf("1.2  \n");
            if(str[j] ==str[i]){
                count++; 
                for (int k = j; k < len-1; k++)
                {
                    printf("1.3  \n");
                    str[k] = str[k+1];
                } 
            }
                printf("1.3  %s  \n", str);
        }
        printf("---Count--> %d \n", count);
    }
    // str[count] = '\0';
    printf("-----final output   \n%s", str);
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