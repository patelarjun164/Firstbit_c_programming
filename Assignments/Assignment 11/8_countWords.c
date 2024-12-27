#include<stdio.h>
#include<string.h>

int countWords(char* str){
    int count=0, length = strlen(str)-1;
    // printf("\n%d\n", length);
    int start=0, end = length-1;
    for (int i = 0; i < length; i++)
    {
        if(str[i]!=' ') break;
        start++;
    }

    for(int i=length-1; i>=0; i--){
        if(str[i]!=' ') break;
        end--;
    }
    
    // printf("start-> %d, end-> %d\n", start, end);
    for (int i = start; i<end; i++)
    {
        if(str[i]==' ' && str[i+1]!=' '){
            count++;
        }
    }
    if(!count) return count;
    return ++count;
}

int main(){
    char str[30];
    printf("Enter Sentence\n");
    fgets(str, sizeof(str), stdin);

    printf("%d words in sentence\n", countWords(str));
    return 0;
}