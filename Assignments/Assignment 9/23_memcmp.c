// memcmp(const void *str1, const void *str2, size_t n)

// Compares n bytes of memory

// cCopychar s1[] = "Hello";
// char s2[] = "Help";
// int result = memcmp(s1, s2, 4);

#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Arjun Patel";
    char str2[] = "Arjsf";

    int res = memcmp(str, str2, 4);

    //memcmp returns 0 if 4 bytes is same as cmp string, else returns 1
    printf("%d \n", res);
    return 0;
}