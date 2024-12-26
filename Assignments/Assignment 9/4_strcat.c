#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Arjun ";
    char str2[] = "Patel!";
    strcat(str1, str2);  //it will concat str2 in str1
    printf("Concatenated String: %s\n", str1); //Arjun Patel!
    // printf("Concatenated String: %s\n", str2); //Patel!
    return 0;
}
