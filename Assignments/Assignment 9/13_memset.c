#include <stdio.h>
#include <string.h>

//Fills a string (or memory block) with a specific character.

int main() {
    char str[20] = "Arjun Patel";
    memset(str, '-', 5); // Replace first 3 characters with '-'
    printf("Modified String: %s\n", str);
    return 0;
}
