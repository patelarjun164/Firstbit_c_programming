#include <stdio.h>
#include <string.h>

char *mystrstr(char *str, char *substr, int n)
{
    int len = strlen(str), count = 0;
    for (int i = 0; i < len; i++)
    {
        //if remainig char are less than substr, than not found
        if((len-i)< n) return 0;

        if ((len-i)>=n && str[i] == substr[0])
        {
            // printf("Enteres in if condtion\n");
            for (int j = 0; j < n; j++)
            {
                // printf("Enter inner for loop\n");
                if (str[i+j] == substr[j])
                {
                    count++;
                    // printf("%c   %c\n", str[i+j], substr[j]);
                    // printf("count --> %d\n", count);
                }
            }
            if(count==n) return &str[i];
            // printf("Out of inner loop count-> %d\n, address-> %u \n", count, &str[i]);
        }
    }
    return 0;
}

int main()
{
    char str[50], substr[50];
    printf("Enter a string 1 upto 50 chars:\n");
    scanf("%s", str);
    printf("Enter sunstring u want to find in string 1:\n");
    scanf("%s", substr);

    int n;
    printf("Enter n upto which u want to check\n");
    scanf("%d", &n);

    char *ptr = mystrstr(str, substr, n);
    // mystrstr(src, substring)
    // it will return address of 1st char of substr, if substr present
    ptr ? printf("Substring upto n char found from index %d to index %d in %s\n", ptr - str, ptr-str+n, str) : printf("Sunstring not found!\n");
    return 0;
}