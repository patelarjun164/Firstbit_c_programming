#include <stdio.h>
#include <string.h>

// Splits a string into tokens based on delimiters.

int main() {
    char str[] = "Hello World! C is more, fun.";
    printf("%u \n",str);
    char *token = strtok(str, " ,.!");

    printf("value of token %u \n", token);
    while (token) {
        printf("%s\n", token);
        printf("%u\n", token);
        token = strtok(NULL, " #,.!"); // Get next token
    }
    printf("\n%s\n", str);
    printf("%u\n", str);
    return 0;
}