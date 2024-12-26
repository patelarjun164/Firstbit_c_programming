// snprintf(char *str, size_t size, const char *format, ...)

// Writes formatted data to string with size limit

// cCopychar str[50];
// snprintf(str, 50, "Value is %d", 123);

#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Arjun Patel";
    snprintf(str, 12, "Value is %d", 12345);
    printf("%s", str);
    return 0;
}