// sprintf(char *str, const char *format, ...)

// Writes formatted data to string

// cCopychar str[50];
// sprintf(str, "Value is %d", 123);

#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Arjun Patel";
    sprintf(str, "value is %d", 123);
    printf("%s", str);
    return 0;
}