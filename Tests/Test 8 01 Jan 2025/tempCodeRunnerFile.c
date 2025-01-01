];
        str[len-i] = str[i];
    }
    return str;
}

int main(){
    char str[20];
    printf("Enter String\n");
    scanf("%s", str);

    printf("Reversed String --> %s", revStr(str));