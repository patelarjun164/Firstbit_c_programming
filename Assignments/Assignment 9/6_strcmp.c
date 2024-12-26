#include <stdio.h>
#include <string.h>

//return 1 if str1>str2, -1 is str1<str2, 0 if str1=str2

int main() {
    char str1[] = "ccccc";
    char str2[] = "bbbbb";
    int result = strcmp(str1, str2);
    if (result < 0)
        printf("str1 is less than str2\n"); //this will executed
    else if (result > 0)
        printf("str1 is greater than str2\n");
    else
        printf("str1 is equal to str2\n");
    return 0;
}
