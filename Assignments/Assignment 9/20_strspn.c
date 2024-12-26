// strspn(const char *str, const char *accept)

// Gets length of initial segment matching accept

// cCopysize_t len = strspn("Hello", "Hel");  // returns 3

 #include<stdio.h>
 #include<string.h>
 int main(){
    char str[] = "Arjun Patel";
    int len = strspn(str, "Arjun b");
    printf("%d", len);
    return 0;
 }