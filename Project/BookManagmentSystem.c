#include <stdio.h>
#include <string.h>

// global variable
int bookIndex = 4;
int actualIndex = 0;

typedef struct Book
{
    int index;
    unsigned int bookId;
    char bookName[50];
    char authorName[20];
    char category[20];
    double price;
    double rating;
} Book;

void getInputFGets(char *str, size_t size, const char *msg)
{
    printf("%s", msg);
    fflush(stdin);
    if (fgets(str, size, stdin))
    {
        // Remove newline character from fgets
        int len = strlen(str);
        if (len > 0 && str[len - 1] == '\n')
        {
            str[len - 1] = '\0';
        }
    }
}

int addBook(Book *brr, int *actualIndex)
{
    static int staticBookId = 1004;
    int nCount;
    printf("How many book do you want to add?\n");
    scanf("%d", &nCount);
    while (nCount--)
    {
        printf("\n---Enter Book Details---\n\n");
        brr[bookIndex].index = *actualIndex;
        (*actualIndex)++;
        brr[bookIndex].bookId = staticBookId;
        printf("Assigned Book id -> %d\n", brr[bookIndex].bookId);

        // Taking book name
        // optimization pending
        getInputFGets(brr[bookIndex].bookName, sizeof(brr[bookIndex].bookName), "Enter Book Name\n");

        // author name
        getInputFGets(brr[bookIndex].authorName, sizeof(brr[bookIndex].authorName), "Enter Author name of book\n");

        // category
        getInputFGets(brr[bookIndex].category, sizeof(brr[bookIndex].category), "Enter Book Category\n");

        printf("Enter book Price\n");
        scanf("%lf", &brr[bookIndex].price);
        while (brr[bookIndex].price < 1)
        {
            printf("Enter valid Price Greater than 0\n");
            scanf("%lf", &brr[bookIndex].price);
        }
        brr[bookIndex].rating = 0;
        staticBookId++;
    }
    return brr[bookIndex].bookId;
}

void displayAllBooks(Book *brr)
{
    printf("\n---------------\n\n");
    for (int i = 0; i < bookIndex; i++)
    {
        printf("Index --> %d | ", brr[i].index);
        printf("Book Id --> %d | ", brr[i].bookId);
        printf("Book Name --> %s\n", brr[i].bookName);
        printf("Author --> %s | ", brr[i].authorName);
        printf("Category --> %s |", brr[i].category);
        printf("Price --> %.2lf |", brr[i].price);
        brr[i].rating &&printf("Rating --> %.1lf\n", brr[i].rating);
        printf("\n---------------\n\n");
    }
}

void displayBookByIndex(Book *brr, int i)
{
    printf("\n---------------\n\n");
    printf("Index --> %d | ", brr[i].index);
    printf("Book Id --> %d | ", brr[i].bookId);
    printf("Book Name --> %s\n", brr[i].bookName);
    printf("Author --> %s | ", brr[i].authorName);
    printf("Category --> %s | ", brr[i].category);
    printf("Price --> %.2lf | ", brr[i].price);
    brr[i].rating &&printf("Rating --> %.1lf\n", brr[i].rating);
    printf("\n---------------\n\n");
}

int searchBookById(Book *brr, int tempId)
{
    for (int i = 0; i < bookIndex; i++)
    {
        if (brr[i].bookId == tempId)
            return i;
    }
    return -1;
}

void searchBookByName(Book *brr)
{
    char *tempName;
    int foundBooksIndex[100], tempIndex = 0, tempId, count = 0, res = -1;

    // Taking book name to search
    getInputFGets(tempName, sizeof(tempName), "Enter book name to search\n");

    // showing available books which contains searched substring
    printf("-----Search Results-----\n");
    for (int i = 0; i < bookIndex; i++)
    {
        if (strstr(strlwr(brr[i].bookName), strlwr(tempName)))
        {
            printf("In if compare\n");
            foundBooksIndex[tempIndex++] = i;
            count++;
            printf("Book Id -> %d  |  Book Name -> %s\n", brr[i].bookId, brr[i].bookName);
        }
    }

    // returning book
    if (count)
    {
        printf("In count\n");

        printf("Enter book id you want to search\n");
        scanf("%d", &tempId);
        int res = searchBookById(brr, tempId);
    }

    if (res != -1)
    {
        displayBookByIndex(brr, searchBookById(brr, tempId));
    }
    else
        printf("Book Not Found!\n");
}

void fetchBooksByAuthor(Book *brr)
{
    char tempName[50];
    int flag = 0;

    // taking authorname
    getInputFGets(tempName, sizeof(tempName), "Enter author name to search his books\n");
    for (int i = 0; i < bookIndex; i++)
    {
        if (strcmp(brr[i].authorName, tempName) == 0)
        {
            displayBookByIndex(brr, i);
            flag = 1;
        }
    }
    !flag &&printf("Book not found written by this author!\n");
}

void fetchBooksByCategory(Book *brr)
{
    char tempName[50];
    int flag = 0;

    // taking category from user
    getInputFGets(tempName, sizeof(tempName), "Enter category to search books\n");
    for (int i = 0; i < bookIndex; i++)
    {
        if (strcmp(brr[i].category, tempName) == 0)
        {
            displayBookByIndex(brr, i);
            flag = 1;
        }
    }
    !flag &&printf("Book not found for this category!\n");
}

int updateBookById(Book *brr)
{
    int tempId, choice;
    printf("Enter book id to update\n");
    scanf("%d", &tempId);
    int res = searchBookById(brr, tempId);
    if (res == -1)
    {
        printf("Book not exists...!\n");
        return 0;
    }
    printf("Press 1 to edit name\n");
    printf("Press 2 to change price\n");
    printf("Press 3 to change rating\n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        char newName[50];
        printf("Current book name --> %s\n", brr[res].bookName);

        // Taking new book name
        getInputFGets(newName, sizeof(newName), "Enter new name: \n");
        strcpy(brr[res].bookName, newName);
        printf("Name updated successfully.\nNew name --> %s\n", brr[res].bookName);
    }
    else if (choice == 2)
    {
        double newPrice;
        printf("Current book price --> %.2lf rs.\n", brr[res].price);
        printf("Enter new price: \n");
        scanf("%lf", &newPrice);
        while (newPrice < 1)
        {
            printf("Enter valid price greater than zero!: \n");
            scanf("%lf", &newPrice);
        }
        brr[res].price = newPrice;
        printf("Price updated successfully.\nNew Price --> %0.2lf\n rs.", brr[res].price);
    }
    else if (choice == 3)
    {
        double newRating;
        printf("Current book rating --> %u\n", brr[res].rating);
        printf("Enter new rating: \n");
        scanf("%lf", &newRating);
        while (newRating < 0 || newRating > 5)
        {
            printf("Enter rating in range 1 to 5: \n");
            scanf("%lf", &newRating);
        }
        brr[res].rating = newRating;
        printf("Rating updated successfully.\nNew Rating --> %0.1lf\n", brr[res].rating);
    }
    else
    {
        printf("Invalid choice!!!\n");
    }
}

void sortBookByPrice(Book *brr)
{
    Book *copyBrr = brr;
    int choice, costliestBookId, cheapestBookId;
    printf("Press 1 for low to high pricing\n");
    printf("Press 2 for High to low pricing\n");
    scanf("%d", &choice);
    while (!(choice == 1 || choice == 2))
    {
        printf("Enter valid choice, press 1 or 2\n");
        scanf("%d", &choice);
    }
    for (int i = 0; i < bookIndex; i++)
    {
        for (int j = i + 1; j < bookIndex; j++)
        {
            if (choice == 1 && (copyBrr[i].price > copyBrr[j].price))
            {
                Book temp = copyBrr[i];
                copyBrr[i] = copyBrr[j];
                copyBrr[j] = temp;
            }
            else if (choice == 2 && (copyBrr[i].price < copyBrr[j].price))
            {
                Book temp = copyBrr[i];
                copyBrr[i] = copyBrr[j];
                copyBrr[j] = temp;
            }
        }
    }

    if (choice == 1)
        costliestBookId = copyBrr[bookIndex - 1].bookId;
    else
        cheapestBookId = copyBrr[bookIndex - 1].bookId;

    if (choice == 2)
        costliestBookId = copyBrr[0].bookId;
    else
        cheapestBookId = copyBrr[0].bookId;

    printf("------Costliest Book in Library------\n");
    displayBookByIndex(brr, searchBookById(brr, costliestBookId));
    // As displayBookByIndex takes index as second parameter
    printf("------Cheapest Book in Library------\n");
    displayBookByIndex(brr, searchBookById(brr, cheapestBookId));
    displayAllBooks(copyBrr);
}

void sortBookByRating(Book *brr)
{
    Book *copyBrr = brr;
    int choice, highestRatedBookId, lowRatedBookId;
    printf("Press 1 for low to high rating\n");
    printf("Press 2 for High to low rating\n");
    scanf("%d", &choice);
    for (int i = 0; i < bookIndex; i++)
    {
        for (int j = i + 1; j < bookIndex; j++)
        {
            if (choice == 1 && (copyBrr[i].rating > copyBrr[j].rating))
            {
                Book temp = copyBrr[i];
                copyBrr[i] = copyBrr[j];
                copyBrr[j] = temp;
            }
            else if (choice == 2 && (copyBrr[i].rating < copyBrr[j].rating))
            {
                Book temp = copyBrr[i];
                copyBrr[i] = copyBrr[j];
                copyBrr[j] = temp;
            }
        }
    }

    if (choice == 1)
        highestRatedBookId = copyBrr[bookIndex - 1].bookId;
    else
        lowRatedBookId = copyBrr[bookIndex - 1].bookId;

    if (choice == 2)
        highestRatedBookId = copyBrr[0].bookId;
    else
        lowRatedBookId = copyBrr[0].bookId;

    printf("------Highest Rated Book in Library------\n");
    displayBookByIndex(brr, searchBookById(brr, highestRatedBookId));
    // As displayBookByIndex takes index as second parameter
    printf("------Low Rated Book in Library------\n");
    displayBookByIndex(brr, searchBookById(brr, lowRatedBookId));

    // display sorted array
    printf("All books in sorted manner\n");
    displayAllBooks(copyBrr);

    // Top 3 rated book
    if (choice == 1)
    {
        printf("Top 3 Rated books\n");
        for (int i = 2; i >= 0; i--)
        {
            displayBookByIndex(copyBrr, i);
        }
    }
    else if (choice == 2)
    {
        printf("Top 3 Rated books\n");
        for (int i = 0; i < 3; i++)
        {
            displayBookByIndex(copyBrr, i);
        }
    }
}

int removeBook(Book *brr)
{
    int tempId;
    printf("Available Book Ids\n");
    for (int i = 0; i < bookIndex; i++)
    {
        printf("Book iD -> %d | Book Name -> %s\n", brr[i].bookId, brr[i].bookName);
    }
    printf("Enter id of book you want to remove\n");
    scanf("%d", &tempId);
    int indexOfBook = searchBookById(brr, tempId);
    for (int i = indexOfBook; i < bookIndex - 1; i++)
    {
        brr[i] = brr[i + 1];
        brr[i].index--;
    }
    bookIndex--;
    return tempId;
}

void storeHardCodedValues(Book *brr)
{
    // hardcoded values for testing
    brr[0].index = 0;
    brr[0].bookId = 1000;
    strcpy(brr[0].bookName, "C Programming");
    strcpy(brr[0].category, "cs");
    strcpy(brr[0].authorName, "arjun");
    brr[0].price = 550;
    brr[0].rating = 4.5;

    brr[1].index = 1;
    brr[1].bookId = 1001;
    strcpy(brr[1].bookName, "C Plus Plus");
    strcpy(brr[1].category, "cs");
    strcpy(brr[1].authorName, "arjun");
    brr[1].price = 820;
    brr[1].rating = 5;

    brr[2].index = 2;
    brr[2].bookId = 1002;
    strcpy(brr[2].bookName, "Python for ML");
    strcpy(brr[2].authorName, "mike");
    strcpy(brr[2].category, "cs");
    brr[2].price = 950;
    brr[2].rating = 3.8;

    brr[3].index = 3;
    brr[3].bookId = 1003;
    strcpy(brr[3].bookName, "Machine Design");
    strcpy(brr[3].category, "mechanical");
    strcpy(brr[3].authorName, "arjun");
    brr[3].price = 1250;
    brr[3].rating = 4.2;
}

int main()
{
    int n, actualIndex = 4;
    Book brr[50];

    // hardcoded values for testing
    storeHardCodedValues(brr);

    printf("Enter valid choice\n");
    while (1)
    {
        printf("0. Exit\n");
        printf("1. Add book\n");
        printf("2. Display All books\n");
        printf("3. Search Book by Id\n");
        printf("4. Search Book by Book Name\n");
        printf("5. Find books by author name\n");
        printf("6. Find books by category\n");
        printf("7. To update book details\n");
        printf("8. Sort book by Price\n");
        printf("9. Sort book by rating\n");
        printf("10. Remove book by id\n");
        scanf("%d", &n);
        if (n == 0)
            break;
        else if (n == 1)
        {
            unsigned int res = addBook(brr, &actualIndex);
            if (res)
            {
                printf("Book Added Successfulluy with bookId -> %d...!\n", res);
                bookIndex++;
            }
            else
                printf("Error in adding book!\n");
        }
        else if (n == 2)
        {
            displayAllBooks(brr);
        }
        else if (n == 3)
        {
            int tempId;
            printf("Enter book id to search\n");
            scanf("%d", &tempId);
            int res = searchBookById(brr, tempId);
            if (res == -1)
                printf("Book not exists...!\n");
            else
                displayBookByIndex(brr, res);
        }
        else if (n == 4)
        {

            searchBookByName(brr);
        }
        else if (n == 5)
        {
            fetchBooksByAuthor(brr);
        }
        else if (n == 6)
        {
            fetchBooksByCategory(brr);
        }
        else if (n == 7)
        {
            updateBookById(brr);
        }
        else if (n == 8)
        {
            sortBookByPrice(brr);
        }
        else if (n == 9)
        {
            sortBookByRating(brr);
        }
        else if (n == 10)
        {
            int res = removeBook(brr);
            res ? printf("Book with id-> %d deleted successfully...!\n", res) : printf("Error in deleting!!!\n");
        }
    }
    return 0;
}