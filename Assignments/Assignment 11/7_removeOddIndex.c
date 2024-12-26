#include<stdio.h>
#include<string.h>

char* removeOddIndex(char* str){
    int length = strlen(str), j=0;
    for (int i = 0; i < length-1; i++)
    {
        if(i%2==0){
            str[j] = str[i];
            j++;
        }
    }
    str[length/2] = '\0';
    return str;
}

int main(){
    char str[30];
    printf("Enter string\n");
    fgets(str, sizeof(str), stdin);
    // scanf("%s", str);
    printf("%s",removeOddIndex(str));
    
    return 0;
}