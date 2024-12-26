#include <stdio.h>
#include <string.h>

int main() {
    char text[] = "Arjun Patel";
    char toFind = 'a';

    //strchr will retrun address of occurance, to store result we need pointer
    char *result = strchr(text, toFind);
    
    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", toFind, result - text);  //occurance address - base adrress will give index
    } else {
        printf("Character '%c' not found.\n", toFind);
    }
    return 0;
}