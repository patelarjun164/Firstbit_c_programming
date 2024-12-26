#include<stdio.h>
#include<string.h>

// strpbrk(const char *str, const char *accept)
// Finds first character matching any in accept


int main(){
    char str[] = "Arjun Patel";
    char *pos = strpbrk(str, "Patel");  // points to 'p'

    printf("%u \n", str);
    printf("%u \n", pos);
    return 0;
}