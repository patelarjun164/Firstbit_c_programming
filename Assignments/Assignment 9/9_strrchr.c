#include <stdio.h>
#include <string.h>

//it will find last occurance of char in given string

int main() {
    char str[] = "Hello, World!";
    printf("base address %u\n", str); //1994389066
    char *ptr = strrchr(str, 'o');
    printf("%u\n", ptr); //1994389084
    if (ptr)
        printf("Last occurrence at position: %ld\n", ptr - str); //84-66 = 8
    else
        printf("Character not found\n");
    return 0;
}
