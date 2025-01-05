#include <stdio.h>
#include <string.h>

// global variable
int bookIndex = 4;

typedef struct Book
{
    int index;
    unsigned int bookId;
    char bookName[50];
    char authorName[20];
    char category[20];
    int price;
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


int findAvaialableBookId(Book *brr)
{
    int i, flag;
    for (i = 1000; i < bookIndex + 1000; i++)
    {
        flag = 1;
        for (int j = 0; j < bookIndex; j++)
        {
            if (i == brr[j].bookId)
            {
                flag = 0;
            }
        }
        if (flag)
            return i;
    }
    return 0;
}
int addBook(Book *brr)
{

    static int staticBookId = 1004;
    int nCount;
    printf("How many book do you want to add?\n");
    scanf("%d", &nCount);
    while (nCount--)
    {
        // assigning available book id
        int avaialableBookId = findAvaialableBookId(brr);
        if (avaialableBookId)
            brr[bookIndex].bookId = avaialableBookId;
        else
        {
            brr[bookIndex].bookId = staticBookId;
            staticBookId++;
        }

        printf("\n\033[1;36m---Enter Book Details---\033[0m\n\n");
        printf("\033[1;35mAssigned Book id ->\033[0m \033[1;33m%d\033[0m\n", brr[bookIndex].bookId);
        // Taking book name
        // optimization pending
        getInputFGets(brr[bookIndex].bookName, sizeof(brr[bookIndex].bookName), "Enter Book Name\n");

        // author name
        getInputFGets(brr[bookIndex].authorName, sizeof(brr[bookIndex].authorName), "Enter Author name of book\n");

        // category
        getInputFGets(brr[bookIndex].category, sizeof(brr[bookIndex].category), "Enter Book Category\n");

        printf("Enter book Price\n");
        scanf("%d", &brr[bookIndex].price);
        while (brr[bookIndex].price < 1)
        {
            printf("Enter valid Price Greater than 0\n");
            scanf("%d", &brr[bookIndex].price);
        }
        brr[bookIndex].rating = 0;
        printf("\n\033[1;32mBook added successfully with id ->\033[0m \033[1;33m%d\033[0m\n\n", brr[bookIndex].bookId);
        bookIndex++;
    }
    return 1;
}

void displayAllBooks(Book *brr, const char ch)
{
    printf("------------------------------------------------------------------------------------        \n");
    printf("| \033[1;35m%-8s\033[0m| \033[1;35m%-25s\033[0m|  \033[1;35m%-12s\033[0m| \033[1;35m%-12s\033[0m| \033[1;35m%-6s\033[0m| \033[1;35m%-6s\033[0m |\n", "Book Id", "Book Name", "Author Name", "Category", "Price", "Rating");
    printf("|---------|--------------------------|--------------|-------------|-------|--------|\n");
    // printf("\n\033[1;33m---------------------------------------\033[0m\n");
    for (int i = 0; i < bookIndex; i++)
    {
        ch == 'g' && printf("| %-8d| %-25s|  %-12s| %-12s| %-6d| %.1lf%-3s |\n", brr[i].bookId, brr[i].bookName, brr[i].authorName, brr[i].category, brr[i].price, brr[i].rating, "");

        ch == 'i' && printf("| \033[1;33m%-8d\033[0m| %-25s|  %-12s| %-12s| %-6d| %.1lf%-3s |\n", brr[i].bookId, brr[i].bookName, brr[i].authorName, brr[i].category, brr[i].price, brr[i].rating, "");

        ch == 'r' && printf("| %-8d| %-25s|  %-12s| %-12s| %-6d| \033[1;33m%.1lf\033[1;33m%-3s\033[0m |\n", brr[i].bookId, brr[i].bookName, brr[i].authorName, brr[i].category, brr[i].price, brr[i].rating, "");

        ch == 'p' && printf("| %-8d| %-25s|  %-12s| %-12s| \033[1;33m%-6d\033[0m| %.1lf%-3s |\n", brr[i].bookId, brr[i].bookName, brr[i].authorName, brr[i].category, brr[i].price, brr[i].rating, "");

        ch == 'a' && printf("| %-8d| %-25s|  \033[1;33m%-12s\033[0m| %-12s| %-6d| %.1lf%-3s |\n", brr[i].bookId, brr[i].bookName, brr[i].authorName, brr[i].category, brr[i].price, brr[i].rating, "");

        ch == 'c' && printf("| %-8d| %-25s|  %-12s| \033[1;33m%-12s\033[0m| %-6d| %.1lf%-3s |\n", brr[i].bookId, brr[i].bookName, brr[i].authorName, brr[i].category, brr[i].price, brr[i].rating, "");
        i != (bookIndex - 1) && printf("|---------|--------------------------|--------------|-------------|-------|--------|\n");
    }
    printf("------------------------------------------------------------------------------------        \n");
}

void displayBookByIndex(Book *brr, int i, const char ch)
{
    printf("------------------------------------------------------------------------------------        \n");
    printf("| \033[1;35m%-8s\033[0m| \033[1;35m%-25s\033[0m|  \033[1;35m%-12s\033[0m| \033[1;35m%-12s\033[0m| \033[1;35m%-6s\033[0m| \033[1;35m%-6s\033[0m |\n", "Book Id", "Book Name", "Author Name", "Category", "Price", "Rating");

    printf("|---------|--------------------------|--------------|-------------|-------|--------|\n");
    ch == 'n' && printf("| %-8d| \033[1;33m%-25s\033[0m|  %-12s| %-12s| %-6d| %.1lf%-3s |\n", brr[i].bookId, brr[i].bookName, brr[i].authorName, brr[i].category, brr[i].price, brr[i].rating, "");

    ch == 'i' && printf("| \033[1;33m%-8d\033[0m| %-25s|  %-12s| %-12s| %-6d| %.1lf%-3s |\n", brr[i].bookId, brr[i].bookName, brr[i].authorName, brr[i].category, brr[i].price, brr[i].rating, "");

    ch == 'r' && printf("| %-8d| %-25s|  %-12s| %-12s| %-6d| \033[1;33m%.1lf\033[1;33m%-3s\033[0m |\n", brr[i].bookId, brr[i].bookName, brr[i].authorName, brr[i].category, brr[i].price, brr[i].rating, "");

    ch == 'p' && printf("| %-8d| %-25s|  %-12s| %-12s| \033[1;33m%-6d\033[0m| %.1lf%-3s |\n", brr[i].bookId, brr[i].bookName, brr[i].authorName, brr[i].category, brr[i].price, brr[i].rating, "");

    ch == 'a' && printf("| %-8d| %-25s|  \033[1;33m%-12s\033[0m| %-12s| %-6d| %.1lf%-3s |\n", brr[i].bookId, brr[i].bookName, brr[i].authorName, brr[i].category, brr[i].price, brr[i].rating, "");

    ch == 'c' && printf("| %-8d| %-25s|  %-12s| \033[1;33m%-12s\033[0m| %-6d| %.1lf%-3s |\n", brr[i].bookId, brr[i].bookName, brr[i].authorName, brr[i].category, brr[i].price, brr[i].rating, "");
    printf("------------------------------------------------------------------------------------        \n");
}

int searchBookById(Book *brr, int tempId)
{
    // Showing available books
    for (int i = 0; i < bookIndex; i++)
    {
        if (brr[i].bookId == tempId)
            return i;
    }
    return -1;
}

void searchBookByName(Book *brr)
{
    char tempName[30];
    int flag=1,res = -1;

    // Taking book name to search
    getInputFGets(tempName, sizeof(tempName), "Enter book name to search\n"); // showing available books which contains searched substring
    printf("\t\033[1;36m-----Search Results-----\033[0m\n");
    for (int i = 0; i < bookIndex; i++)
    {
        if (strstr(strlwr(brr[i].bookName), strlwr(tempName)))
        {
            displayBookByIndex(brr, i, 'n');
            flag=0;
        }
    }
    
    flag && printf("\n\033[1;31mBook Not Found! Try again with available book names!\033[0m\n\n");
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
            displayBookByIndex(brr, i, 'a');
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
        if (strstr(strlwr(brr[i].category), strlwr(tempName)))
        {
            displayBookByIndex(brr, i, 'c');
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
    displayBookByIndex(brr, res, 'i');
    printf("Press 1 to edit name\n");
    printf("Press 2 to change price\n");
    printf("Press 3 to change rating\n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        char newName[50];
        printf("Current book name --> \033[1;34m%s\033[0m\n", brr[res].bookName);

        // Taking new book name
        getInputFGets(newName, sizeof(newName), "Enter new name: \n");
        strcpy(brr[res].bookName, newName);
        printf("Name updated successfully.\nNew name --> \033[1;33m%s\033[0m\n\n", brr[res].bookName);

        displayBookByIndex(brr, res, 'n');
    }
    else if (choice == 2)
    {
        double newPrice;
        printf("Current book price --> \033[1;34m%d\033[0m rs.\n", brr[res].price);
        printf("Enter new price: \n");
        scanf("%lf", &newPrice);
        while (newPrice < 1)
        {
            printf("Enter valid price greater than zero!: \n");
            scanf("%lf", &newPrice);
        }
        brr[res].price = newPrice;
        printf("Price updated successfully.\nNew Price --> \033[1;33m%d\033[0m rs.\n\n", brr[res].price);

        displayBookByIndex(brr, res, 'p');
    }
    else if (choice == 3)
    {
        double newRating;
        printf("Current book rating --> \033[1;34m%.1lf\033[0m\n", brr[res].rating);
        printf("Enter new rating: \n");
        scanf("%lf", &newRating);
        while (newRating < 0 || newRating > 5)
        {
            printf("Enter rating in range 1 to 5: \n");
            scanf("%lf", &newRating);
        }
        brr[res].rating = newRating;
        printf("Rating updated successfully.\nNew Rating --> \033[1;33m%.1lf\033[0m\n\n", brr[res].rating);
        displayBookByIndex(brr, res, 'r');
    }
    else
    {
        printf("Invalid choice!!!\n");
    }
}

void sortBookByPrice(Book *brr)
{
    Book copyBrr[bookIndex];
    for (int i = 0; i < bookIndex; i++)
    {
        copyBrr[i] = brr[i];
    }

    int choice, costliestBookId, cheapestBookId;
    for (int i = 0; i < bookIndex; i++)
    {
        for (int j = i + 1; j < bookIndex; j++)
        {
            if (copyBrr[i].price > copyBrr[j].price)
            {
                Book temp = copyBrr[i];
                copyBrr[i] = copyBrr[j];
                copyBrr[j] = temp;
            }
        }
    }
    costliestBookId = copyBrr[bookIndex - 1].bookId;
    cheapestBookId = copyBrr[0].bookId;
    printf("Press 1 for low to high pricing\n");
    printf("Press 2 for High to low pricing\n");
    printf("Press 3 to find costliest book\n");
    printf("Press 4 to find most afforadable book\n");
    printf("Press 5 to top 3 highly priced book\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        printf("\t\t\033[1;36m------Books Sorted by Price LOW to HIGH------\033[0m\n");
        displayAllBooks(copyBrr, 'p');
        break;
    }
    case 2:
    {
        for (int i = 0; i < bookIndex / 2; i++)
        {
            Book temp = copyBrr[i];
            copyBrr[i] = copyBrr[bookIndex - i - 1];
            copyBrr[bookIndex - i - 1] = temp;
        }
        printf("\t\t\033[1;36m------Books Sorted by Price LOW to HIGH------\033[0m\n");
        displayAllBooks(copyBrr, 'p');
        break;
    }
    case 3:
    {
        printf("\t\t\033[1;36m------Costliest Book in Library------\033[0m\n");
        displayBookByIndex(brr, searchBookById(brr, costliestBookId), 'p');
        break;
    }
    case 4:
    {
        printf("\t\t\033[1;36m------Most Affordable Book in Library------\033[0m\n");
        displayBookByIndex(brr, searchBookById(brr, cheapestBookId), 'p');
        break;
    }
    case 5: {
        printf("\t\t\033[1;36m-----Top 3 Highly Priced books-----\033[0m\n");
        for (int i = bookIndex - 1; i >= bookIndex - 3; i--)
        {
            displayBookByIndex(copyBrr, i, 'p');
        }
        break;
    }

    default:
        break;
    }
}

void sortBookByRating(Book *brr)
{
    Book copyBrr[bookIndex];
    for (int i = 0; i < bookIndex; i++)
    {
        copyBrr[i] = brr[i];
    }
    int choice, highestRatedBookId, lowRatedBookId;
    for (int i = 0; i < bookIndex; i++)
    {
        for (int j = i + 1; j < bookIndex; j++)
        {
            if (copyBrr[i].rating > copyBrr[j].rating)
            {
                Book temp = copyBrr[i];
                copyBrr[i] = copyBrr[j];
                copyBrr[j] = temp;
            }
        }
    }
    printf("Press 1 for low to high rating\n");
    printf("Press 2 for High to low rating\n");
    printf("Press 3 to Highest Rated book\n");
    printf("Press 4 to Lowest Rated book\n");
    printf("Press 5 to list top 3 rated books\n");
    scanf("%d", &choice);

    highestRatedBookId = copyBrr[bookIndex - 1].bookId;
    lowRatedBookId = copyBrr[0].bookId;

    switch (choice)
    {
    case 1:
    {
        printf("\t\033[1;36m------Books sorted by Rating LOW to HIGH------\033[0m\n");
        displayAllBooks(copyBrr, 'r');
        break;
    }
    case 2:
    {
        for (int i = 0; i < bookIndex / 2; i++)
        {
            Book temp = copyBrr[i];
            copyBrr[i] = copyBrr[bookIndex - i - 1];
            copyBrr[bookIndex - i - 1] = temp;
        }

        printf("\t\033[1;36m------Books sorted by Rating HIGH to LOW------\033[0m\n");
        displayAllBooks(copyBrr, 'r');
        break;
    }
    case 3:
    {
        printf("\t\033[1;36m------Highest Rated Book in Library------\033[0m\n");
        displayBookByIndex(brr, searchBookById(brr, highestRatedBookId), 'r');
        break;
    }
    case 4:
    {
        printf("\t\033[1;36m------Lowest Rated Book in Library------\033[0m\n");
        displayBookByIndex(brr, searchBookById(brr, lowRatedBookId), 'r');
        break;
    }
    case 5:
    {
        printf("\t\t\033[1;36m-----Top 3 Rated books-----\033[0m\n");
        for (int i = bookIndex - 1; i >= bookIndex - 3; i--)
        {
            displayBookByIndex(copyBrr, i, 'r');
        }
        break;
    }

    default:
        printf("\033[1;31mInvalid choice!\033[0m\n\n");
        break;
    }
}

int removeBook(Book *brr)
{
    int tempId;
    printf("\t\033[1;36m Available Book Ids\033[0m\n");
    displayAllBooks(brr, 'i');
    printf("Enter id of book you want to remove\n");
    scanf("%d", &tempId);
    fflush(stdin);
    int indexOfBook = searchBookById(brr, tempId);
    if (indexOfBook == -1)
        return 0;
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

    printf("\n\t\033[1;35m Welcome to Library\033[0m\n\n");
    printf("Enter valid choice\n");
    while (1)
    {

        printf("1. Add book\n");
        printf("2. Display All books\n");
        printf("3. Search Book by Id\n");
        printf("4. Search Book by Book Name\n");
        printf("5. Find books by author name\n");
        printf("6. Find books by category\n");
        printf("7. Sort book by Price\n");
        printf("8. Sort book by rating\n");
        printf("9. To update book details\n");
        printf("10. Remove book by id\n");
        printf("\033[0;31m0. Exit\033[0m\n");
        scanf("%d", &n);
        fflush(stdin);

        switch (n)
        {
        case 0:
        {
            printf("\n\t\033[1;35m_/\\_ Thanks for using our services _/\\_\033[0m\n\n");
            break;
        }

        case 1:
        {
            unsigned int res = addBook(brr);
            if (res != 1)
            {
                printf("\033[1;31mError in adding book!\033[0m\n");
            }
            break;
        }
        case 2:
        {
            displayAllBooks(brr, 'g');
            break;
        }
        case 3:
        {
            int tempId;
            printf("Enter book id to search\n");
            scanf("%d", &tempId);
            fflush(stdin);
            int res = searchBookById(brr, tempId);
            if (res == -1)
                printf("\033[1;31mBook not Found! Try again with available id!!!\033[0m\n");
            else
                displayBookByIndex(brr, res, 'i');
            break;
        }
        case 4:
        {
            searchBookByName(brr);
            break;
        }
        case 5:
        {
            fetchBooksByAuthor(brr);
            break;
        }
        case 6:
        {
            fetchBooksByCategory(brr);
            break;
        }
        case 7:
        {
            // creating
            sortBookByPrice(brr);
            break;
        }
        case 8:
        {
            sortBookByRating(brr);
            break;
        }
        case 9:
        {
            displayAllBooks(brr, 'i');
            updateBookById(brr);
            break;
        }
        case 10:
        {
            displayAllBooks(brr, 'i');
            int res = removeBook(brr);
            res ? printf("\033[1;32mBook with id-> %d deleted successfully...!\033[0m\n", res) : printf("\033[1;31mBook not found with such id! Try again with valid book id.\033[0m\n");
            break;
        }
        default:
            printf("\033[1;36mEnter valid choice.\033[0m\n");
            break;
        }

        if (n == 0)
            break;
    }
    return 0;
}