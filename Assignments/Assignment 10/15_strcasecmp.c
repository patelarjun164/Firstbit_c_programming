#include<stdio.h>
#include<string.h>

int mystrcasecmp(char* str, char* str2){
    // while(*str2 != '\0'){
    //     printf("minus value %d\n", *str - *str2);
    //     if(*str - *str2 !=0 && *str - *str2 != 32 && *str - *str2 !=-32){
    //         return 0;
    //     }
    //     str++;
    //     str2++;
    // }
    for(int i=0; i<strlen(str); i++){
        if(str[i]-str2[i] != 0 && str[i]-str2[i] != 32 && str[i]-str2[i] != -32){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str[50], str2[50];
    printf("Enter a string 1 upto 50 chars:\n");
    scanf("%s", str);
    printf("Enter a string 2 upto 50 chars:\n");
    scanf("%s", str2);

    int res = mystrcasecmp(str, str2);
    printf("%d \n", res);
    res ? printf("Same\n") : printf("Not Same\n");
    return 0;
}