#include <stdio.h>
#include <string.h>

void reverseString(char* str, int start, int end){
    printf("ENTRYYYYYYY\n");
    int tempS = start, tempE = end;
    for (int i = start; i <=end; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    while(start<=end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    for (int i = tempS; i <=tempE; i++)
    {
        printf("%c", str[i]);
    }

    printf("\nEXITTTTT\n");
}

int main()
{
    char str[30];
    char longestStr[30] = "";
    char temp[30];
    int j = 0;

    printf("Enter String\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str), start, isStartFound = 0, end, isEndFound=0;
    printf("len is %d\n", len);
    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ')
        {
            !isStartFound && (start = i);
            !isStartFound && printf("Start -> %d\n", start);
            isStartFound = 1;
            if (isStartFound && i == len - 1)
            {
                end = i;
                printf("Function Call from if\n");
                printf("i -> %d, j -> %d\n", start,end);
                reverseString(str, start, end);
                printf("End -> %d\n", end);
            }
        }
        else
        {
            if (str[i] == str[i +1] && i!=len-1)
                continue;
            isStartFound && (end = i - 1) && (isEndFound=1);
            isStartFound && printf("End -> %d\n", end);
            printf("Start value last %d\n", start);
            isStartFound = 0;

            if(isEndFound){
                printf("Function Call from else\n");
                printf("i -> %d, j -> %d\n", start,end);
                reverseString(str, start, end);
            } 
        }
        // printf("i %d\n", i);
    }
    printf("%s\n", str);

    return 0;
}