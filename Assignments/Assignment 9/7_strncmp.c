#include <stdio.h>
#include <string.h>

//compare only n chars of str2

int main() {
    char str1[] = "arjun";
    char str2[] = "arjunpatel";
    int n = 4;
    int result = strncmp(str1, str2, n);
    if (result == 0)
        printf("The first %d characters are equal\n",n);
    else
        printf("The first %d characters are not equal\n", n);
    return 0;
}
