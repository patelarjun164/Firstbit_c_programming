#include<stdio.h>

char* mystrncpy(char* str2, char* str, int n){
    for (int i = 0; i < n; i++) str2[i] = str[i];
    return str2;
}

int main(){
    char str[50], str2[50];
    int n;
    printf("Enter a string 1 upto 50 chars:\n");
    scanf("%s", str);

    printf("Enter value of n upto which u want to copy string\n");
    scanf("%d", &n);

    printf("%s", mystrncpy(str2, str, n));
    // mystrncpy(dest, src, n);
    return 0;
}