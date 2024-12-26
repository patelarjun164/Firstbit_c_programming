#include <stdio.h>
#include <string.h>

//concat string upto n char

int main() {
    char str1[50] = "Arjun ";
    char str2[] = "Patel";
    strncat(str1, str2, 3);
    printf("Concatenated String: %s\n", str1); //Arjun Pat --> str1 + 3 char from str2
    return 0;
}
