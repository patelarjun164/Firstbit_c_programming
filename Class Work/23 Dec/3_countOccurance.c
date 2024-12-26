#include<stdio.h>
#include<string.h>
int main(){
    char str[50], c;
    printf("Enter string value\n");
    scanf("%s", str);

    printf("Enter char value u want to find in string\n");
    fflush(stdin);
    scanf("%c", &c);

    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        str[i]==c && count++;
    }
    
    printf("%d ", count);
    return 0;
}