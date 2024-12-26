#include <stdio.h>
#include <string.h>
#include<stdlib.h>

//Duplicates a string (non-standard, available in POSIX).

int main() {
    char str[] = "Hello";
    char *dup = strdup(str);
    char cpy[strlen(str)];
    strcpy(cpy, str);
    printf("Duplicated String: %s\n", cpy);
    printf("Duplicated String: %s\n", dup);
    free(dup); // Remember to free memory
    printf("Duplicated String: %s\n", dup);

    return 0;
}
