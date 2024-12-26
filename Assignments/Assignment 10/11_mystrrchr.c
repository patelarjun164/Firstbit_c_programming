#include<stdio.h>
#include<string.h>

char* mystrchr(char* str, char ch){
    // while(*str != '\0'){
    //     if(*str==ch) return str;
    //     str++;
    // }
    for(int i=strlen(str)-1; i>=0; i--){
        if(str[i]==ch) return &str[i];
    }
    return 0;
}

int main(){
    char str[20], ch;
    printf("Enter a string 1 upto 50 chars:\n");
    scanf("%s", str);
    printf("Enter char u want to find in string 1:\n");
    fflush(stdin);
    scanf("%c", &ch);

    char* ptr = mystrchr(str, ch);
    if(ptr)  printf("%c is at index %d", ch, ptr-str);
    else printf("Not Found");
    return 0;
}