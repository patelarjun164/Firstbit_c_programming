// memmove(void *dest, const void *src, size_t n)

// Copies n bytes (safe for overlapping regions)

// cCopychar str[] = "Hello";
// memmove(str+1, str, 4);

//A r j u n   P a t e l
//0 1 2 3 4 5 6 7 8 9 10

#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "Arjun Patel";
    memmove(str+1, str+6, 5);
    // memmove(dest, src, 6);
    //its replaces 
    printf("%s", str);
    return 0;
}