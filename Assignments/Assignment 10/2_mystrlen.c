#include<stdio.h>

int mystrlen(char* str){
    int count=0;
    while(str[count++] != '\0');
    return count-1;
}

int main(){
    char str[50];
    printf("Enter a string upto 50 chars:\n");
    scanf("%s", str);
    // fgets(str, sizeof(str), stdin);

    printf("Length is %d\n", mystrlen(str));
    return 0;
}