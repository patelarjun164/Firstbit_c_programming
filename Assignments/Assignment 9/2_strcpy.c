#include <stdio.h>
#include <string.h>

int main() {
    // char src[] = "ArjunPatel";
    // char dest[strlen(src)];
    // strcpy(dest, src);
    // printf("Copied String: %s\n", dest);
    // printf("Copied String: %s\n", src);
    char str[50];
    scanf("%s", str);
    char str2[50];
    scanf("%s", str2);

    strncat(str, str2, 2);
    printf("%s", str);
    return 0;
}
