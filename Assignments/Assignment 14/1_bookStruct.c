#include<stdio.h>
#include<string.h>

typedef struct Book{
    char name[30];
    int id;
    char author[30];
    double price;
} Book;

void fgetsInput(char* str, int size){
    int len = strlen(str);
    fflush(stdin);
    if(fgets(str, size, stdin)){
        if(len>0 && str[len-1]=='\n') str[len-1] = '\0';
    }
    fflush(stdin);
}

void displayAll(Book* books,int n){
    for (int i = 0; i < n; i++)
    {
        printf("Book Name -> %s", books[i].name);
        printf("Book id -> %d\n", books[i].id);
        printf("Author Name -> %s", books[i].author);
        printf("Book id -> %.2lf\n", books[i].price);
    } 
}

int main(){
    Book books[3];
    for (int i = 0; i < 3; i++)
    {
        printf("---Book %d---\n", i+1);
        printf("Enter name of the book\n");
        fgetsInput(books[i].name, sizeof(books[i].name));
        printf("Enter id of book\n");
        scanf("%d", &books[i].id);
        printf("Enter name of the author\n");
        fgetsInput(books[i].author, sizeof(books[i].name));
        printf("Enter price of book\n");
        scanf("%lf", &books[i].price);
    }

    displayAll(books, 3);
    
    return 0;
}