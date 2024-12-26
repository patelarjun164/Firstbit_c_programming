//copy only n char to dest str
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "0123456789";
    // printf("%d", strlen(src));
    char dest[strlen(src)];
    strncpy(dest, src, 5);
    dest[5] = '\0';
    printf("Copied String: %s\n", dest);  //01234
    return 0;
}
