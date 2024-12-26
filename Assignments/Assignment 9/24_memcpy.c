// memcpy(void *dest, const void *src, size_t n)

// Copies n bytes from src to dest

// cCopychar src[] = "Hello";
// char dest[6];
// memcpy(dest, src, 6);

#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Hello world";
    char dest[strlen(str)+1];
    memcpy(dest, str, 4);
    dest[4] = '\0';

    printf("%s \n", dest);

    return 0;
}