#include <stdio.h>
#include <string.h>

char *mystrstr(char *str, char *substr)
{
    int len = strlen(str), lensbstr = strlen(substr), count = 0, i=0,j=0,index;
    // for (int i = 0; i < len; i++)
    // {
    //     //if remainig char are less than substr, than not found
    //     if((len-i)< lensbstr) return 0;
    //     if ((len-i)>=lensbstr && str[i] == substr[0])
    //     {
    //         // printf("Enteres in if condtion\n");
    //         for (int j = 0; j < lensbstr; j++)
    //         {
    //             // printf("Enter inner for loop\n");
    //             if (str[i+j] == substr[j])
    //             {
    //                 count++;
    //                 // printf("%c   %c\n", str[i+j], substr[j]);
    //                 // printf("count --> %d\n", count);
    //             }
    //         }
    //         if(count==lensbstr) return &str[i];
    //         // printf("Out of inner loop count-> %d\n, address-> %u \n", count, &str[i]);
    //     }
    // };
    while(str[i] != '\0'){
        if(str[i]==substr[0]){
            index= i;
            count++;
        }
        printf("%c  %c\n", str[i], substr[j]);
        if(str[i]==substr[j]){
            j++;
        }
        i++;
    }
    if(j==lensbstr && count>1) return &str[index-count];
    else if(j==lensbstr) return &str[index];
    return 0;
}

int main()
{
    char str[50], substr[50];
    printf("Enter a string 1 upto 50 chars:\n");
    scanf("%s", str);
    printf("Enter sunstring u want to find in string 1:\n");
    scanf("%s", substr);

    char *ptr = mystrstr(str, substr);
    // mystrstr(src, substring)
    // it will return address of 1st char of substr, if substr present
    ptr ? printf("%s sunstring found from index %d to index %d in %s\n", substr, ptr - str, ptr-str+strlen(substr)-1, str) : printf("Sunstring not found!\n");
    return 0;
}