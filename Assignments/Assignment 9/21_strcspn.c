// strcspn(const char *str, const char *reject)

// Gets length of initial segment not matching reject

// cCopysize_t len = strcspn("Hello", "o");  // returns 4

#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Arjun Patel";
    int len = strcspn(str, "P");

    printf("%d", len);
    return 0;
}