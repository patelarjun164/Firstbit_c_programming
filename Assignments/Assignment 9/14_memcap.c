#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    int result = memcmp(str1, str2, 5);
    if (result == 0)
        printf("Blocks are identical\n");
    else
        printf("Blocks are different\n");
    return 0;
}
