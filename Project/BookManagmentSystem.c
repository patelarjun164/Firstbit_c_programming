#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// global variable
int bookIndex = 9;


typedef struct Book
{
    unsigned int bookId;
    char bookName[50];
    char authorName[20];
    char category[20];
    int price;
    double rating;
} Book;

typedef struct Student{
    int studentId;
    char name[20];
    long long int mobileNo;
    Book bookIssued;
    char issuedDate[10];
} Student;

void getInputFGets(char *str, size_t size, const char *msg)
{
    printf("%s", msg);
    fflush(stdin);
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';

    while (!strlen(str))
    {
        printf("\033[1;31mString can not be EMPTY!\033[0m\nEnter valid input again.\n");
        fgets(str, size, stdin);
        str[strcspn(str, "\n")] = '\0';
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
    static int staticBookId = 1009;
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

void displayAllBooks(Book *brr, int size, const char ch)
{
    printf("------------------------------------------------------------------------------------        \n");
    printf("| \033[1;35m%-8s\033[0m| \033[1;35m%-25s\033[0m|  \033[1;35m%-12s\033[0m| \033[1;35m%-12s\033[0m| \033[1;35m%-6s\033[0m| \033[1;35m%-6s\033[0m |\n", "Book Id", "Book Name", "Author Name", "Category", "Price", "Rating");
    printf("|---------|--------------------------|--------------|-------------|-------|--------|\n");
    // printf("\n\033[1;33m---------------------------------------\033[0m\n");
    for (int i = 0; i < size; i++)
    {
        ch == 'g' && printf("| %-8d| %-25s|  %-12s| %-12s| %-6d| %.1lf%-3s |\n", brr[i].bookId, brr[i].bookName, brr[i].authorName, brr[i].category, brr[i].price, brr[i].rating, "");

        ch == 'i' && printf("| \033[1;33m%-8d\033[0m| %-25s|  %-12s| %-12s| %-6d| %.1lf%-3s |\n", brr[i].bookId, brr[i].bookName, brr[i].authorName, brr[i].category, brr[i].price, brr[i].rating, "");

        ch == 'n' && printf("| %-8d| \033[1;33m%-25s\033[0m|  %-12s| %-12s| %-6d| %.1lf%-3s |\n", brr[i].bookId, brr[i].bookName, brr[i].authorName, brr[i].category, brr[i].price, brr[i].rating, "");

        ch == 'r' && printf("| %-8d| %-25s|  %-12s| %-12s| %-6d| \033[1;33m%.1lf\033[1;33m%-3s\033[0m |\n", brr[i].bookId, brr[i].bookName, brr[i].authorName, brr[i].category, brr[i].price, brr[i].rating, "");

        ch == 'p' && printf("| %-8d| %-25s|  %-12s| %-12s| \033[1;33m%-6d\033[0m| %.1lf%-3s |\n", brr[i].bookId, brr[i].bookName, brr[i].authorName, brr[i].category, brr[i].price, brr[i].rating, "");

        ch == 'a' && printf("| %-8d| %-25s|  \033[1;33m%-12s\033[0m| %-12s| %-6d| %.1lf%-3s |\n", brr[i].bookId, brr[i].bookName, brr[i].authorName, brr[i].category, brr[i].price, brr[i].rating, "");

        ch == 'c' && printf("| %-8d| %-25s|  %-12s| \033[1;33m%-12s\033[0m| %-6d| %.1lf%-3s |\n", brr[i].bookId, brr[i].bookName, brr[i].authorName, brr[i].category, brr[i].price, brr[i].rating, "");
        i != (size - 1) && printf("|---------|--------------------------|--------------|-------------|-------|--------|\n");
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

int searchBookById(Book *brr, Book *tempBrr, int tempId)
{
    // Showing available books
    for (int i = 0; i < bookIndex; i++)
    {
        if (brr[i].bookId == tempId)
        {
            tempBrr[0] = brr[i];
            return i;
        }
    }
    return -1;
}

void searchBookByName(Book *brr, Book *tempBrr)
{
    char tempName[30];
    char bookTempName[30];
    int flag = 1, res = -1, tempCount = 0;

    // Taking book name to search
    getInputFGets(tempName, sizeof(tempName), "Enter book name to search\n"); // showing available books which contains searched substring
    if (!strlen(tempName))
    {
        printf("\t\033[1;31mPlease Enter valid String!\033[0m\n\n");
        return;
    }
    printf("\t\t\033[1;36m-----Search Results-----\033[0m\n");
    for (int i = 0; i < bookIndex; i++)
    {
        strcpy(bookTempName, brr[i].bookName);
        if (strstr(strlwr(bookTempName), strlwr(tempName)))
        {
            tempBrr[tempCount++] = brr[i];
            flag = 0;
        }
    }

    if (!flag)
        displayAllBooks(tempBrr, tempCount, 'n');

    flag &&printf("\n\033[1;31mBook Not Found! Try again with available book names!\033[0m\n\n");
}

void fetchBooksByAuthor(Book *brr, Book *tempBrr)
{
    char tempName[50];
    int tempCount = 0;

    // taking authorname
    getInputFGets(tempName, sizeof(tempName), "Enter author name to search his books\n");
    for (int i = 0; i < bookIndex; i++)
    {
        if (strstr(strlwr(brr[i].authorName), strlwr(tempName)))
        {
            tempBrr[tempCount++] = brr[i];
        }
    }

    if (tempCount)
        displayAllBooks(tempBrr, tempCount, 'a');

    !tempCount &&printf("\033[1;31m Book not found written by this author!\033[0m\n");
}

void fetchBooksByCategory(Book *brr, Book *tempBrr)
{
    char tempName[50];
    int tempCount = 0;

    // taking category from user
    getInputFGets(tempName, sizeof(tempName), "Enter category to search books\n");
    for (int i = 0; i < bookIndex; i++)
    {
        if (strstr(strlwr(brr[i].category), strlwr(tempName)))
        {
            tempBrr[tempCount++] = brr[i];
        }
    }
    !tempCount &&printf("\033[1;31mBook not found for this category!\033[0m\n\n");

    if (tempCount)
        displayAllBooks(tempBrr, tempCount, 'c');
}

int updateBookById(Book *brr, Book *tempBrr)
{
    int tempId, choice;
    printf("Enter book id to update\n");
    scanf("%d", &tempId);
    int res = searchBookById(brr, tempBrr, tempId);
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
        printf("\033[1;31m Invalid choice!!!\033[0m\n");
    }
}

void sortBookByPrice(Book *brr, Book *tempBrr)
{
    int choice, costliestBookId, cheapestBookId;
    for (int i = 0; i < bookIndex; i++)
    {
        tempBrr[i] = brr[i];
    }
    printf("Press 1 for low to high pricing\n");
    printf("Press 2 for High to low pricing\n");
    printf("Press 3 to find costliest book\n");
    printf("Press 4 to find most afforadable book\n");
    printf("Press 5 to top 3 highly priced book\n");
    scanf("%d", &choice);
    fflush(stdin);

    for (int i = 0; i < bookIndex; i++)
    {
        for (int j = i + 1; j < bookIndex; j++)
        {
            if ((choice == 1) ? tempBrr[i].price > tempBrr[j].price : tempBrr[i].price < tempBrr[j].price)
            {
                Book temp = tempBrr[i];
                tempBrr[i] = tempBrr[j];
                tempBrr[j] = temp;
            }
        }
    }
    if (choice == 1)
    {
        costliestBookId = tempBrr[bookIndex - 1].bookId;
        cheapestBookId = tempBrr[0].bookId;
    }
    else
    {
        costliestBookId = tempBrr[0].bookId;
        cheapestBookId = tempBrr[bookIndex - 1].bookId;
    }

    switch (choice)
    {
    case 1:
    {
        printf("\t\t\033[1;36m------Books Sorted by Price LOW to HIGH------\033[0m\n");
        displayAllBooks(tempBrr, bookIndex, 'p');
        break;
    }
    case 2:
    {
        printf("\t\t\033[1;36m------Books Sorted by Price LOW to HIGH------\033[0m\n");
        displayAllBooks(tempBrr, bookIndex, 'p');
        break;
    }
    case 3:
    {
        printf("\t\t\033[1;36m------Costliest Book in Library------\033[0m\n");
        int res = searchBookById(brr, tempBrr, costliestBookId);
        tempBrr[0] = brr[res];
        displayAllBooks(tempBrr, 1, 'p');
        break;
    }
    case 4:
    {
        printf("\t\t\033[1;36m------Most Affordable Book in Library------\033[0m\n");
        int res = searchBookById(brr, tempBrr, cheapestBookId);
        tempBrr[0] = brr[res];
        displayAllBooks(tempBrr, 1, 'p');
        break;
    }
    case 5:
    {
        printf("\t\t\033[1;36m-----Top 3 Highly Priced books-----\033[0m\n");
        displayAllBooks(tempBrr, 3, 'p');
        break;
    }

    default:
        printf("\t\033[1;31mInvalid Choice!!!\033[0m\n\n");
        break;
    }
}

void sortBookByRating(Book *brr, Book *tempBrr)
{
    int choice, highestRatedBookId, lowRatedBookId, tempCount = 0;
    for (int i = 0; i < bookIndex; i++)
    {
        tempBrr[i] = brr[i];
    }

    // asking user to input choice so as to sort array acoordingly
    printf("Press 1 for low to high rating\n");
    printf("Press 2 for High to low rating\n");
    printf("Press 3 to Highest Rated book\n");
    printf("Press 4 to Lowest Rated book\n");
    printf("Press 5 to list top 3 rated books\n");
    scanf("%d", &choice);

    for (int i = 0; i < bookIndex; i++)
    {
        for (int j = i + 1; j < bookIndex; j++)
        {
            if ((choice == 1 || choice == 4) ? tempBrr[i].rating > tempBrr[j].rating : tempBrr[i].rating < tempBrr[j].rating)
            {
                Book temp = tempBrr[i];
                tempBrr[i] = tempBrr[j];
                tempBrr[j] = temp;
            }
        }
    }

    if (choice == 1)
    {
        highestRatedBookId = tempBrr[bookIndex - 1].bookId;
        lowRatedBookId = tempBrr[0].bookId;
    }
    else
    {
        highestRatedBookId = tempBrr[0].bookId;
        lowRatedBookId = tempBrr[bookIndex - 1].bookId;
    }

    switch (choice)
    {
    case 1:
    {
        printf("\t\033[1;36m------Books sorted by Rating LOW to HIGH------\033[0m\n");
        displayAllBooks(tempBrr, bookIndex, 'r');
        break;
    }
    case 2:
    {
        printf("\t\033[1;36m------Books sorted by Rating HIGH to LOW------\033[0m\n");
        displayAllBooks(tempBrr, bookIndex, 'r');
        break;
    }
    case 3:
    {
        printf("\t\033[1;36m------Highest Rated Book in Library------\033[0m\n");
        int res = searchBookById(brr, tempBrr, highestRatedBookId);
        tempBrr[0] = brr[res];
        displayAllBooks(tempBrr, 1, 'r');
        break;
    }
    case 4:
    {
        printf("\t\033[1;36m------Lowest Rated Book in Library------\033[0m\n");
        // int res = searchBookById(brr, tempBrr,lowRatedBookId);
        // tempBrr[0] = brr[res];
        // printf("Testing\n");
        // displayAllBooks(tempBrr, bookIndex, 'r');
        // printf("Testing End\n");
        for (int i = 0; i < bookIndex; i++)
        {
            if (brr[i].rating == tempBrr[0].rating)
            {
                tempBrr[tempCount++] = brr[i];
            }
        }

        displayAllBooks(tempBrr, tempCount, 'r');
        break;
    }
    case 5:
    {
        printf("\t\t\033[1;36m-----Top 3 Rated books-----\033[0m\n");
        displayAllBooks(tempBrr, 3, 'r');
        break;
    }

    default:
        printf("\033[1;31mInvalid choice!\033[0m\n\n");
        break;
    }
}

int removeBook(Book *brr, int index)
{
    for (int i = index; i < bookIndex - 1; i++)
    {
        brr[i] = brr[i + 1];
    }
    bookIndex--;
    return 1;
}

void storeHardCodedValues(Book *brr)
{
    // hardcoded values for testing
    brr[0].bookId = 1000;
    strcpy(brr[0].bookName, "C Programming");
    strcpy(brr[0].category, "cs");
    strcpy(brr[0].authorName, "arjun");
    brr[0].price = 750;
    brr[0].rating = 4.5;

    brr[1].bookId = 1001;
    strcpy(brr[1].bookName, "C Plus Plus");
    strcpy(brr[1].category, "cs");
    strcpy(brr[1].authorName, "arjun");
    brr[1].price = 820;
    brr[1].rating = 5;

    brr[2].bookId = 1002;
    strcpy(brr[2].bookName, "Java");
    strcpy(brr[2].authorName, "mike");
    strcpy(brr[2].category, "cs");
    brr[2].price = 950;
    brr[2].rating = 3.8;

    brr[3].bookId = 1003;
    strcpy(brr[3].bookName, "Machine Design");
    strcpy(brr[3].category, "mechanical");
    strcpy(brr[3].authorName, "arjun");
    brr[3].price = 1500;
    brr[3].rating = 5.1;

    brr[4].bookId = 1004;
    strcpy(brr[4].bookName, "Fluid Mechanics");
    strcpy(brr[4].category, "mechanical");
    strcpy(brr[4].authorName, "mike");
    brr[4].price = 1750;
    brr[4].rating = 3.2;

    brr[5].bookId = 1005;
    strcpy(brr[5].bookName, "Thermodynamics");
    strcpy(brr[5].category, "mechanical");
    strcpy(brr[5].authorName, "Jack");
    brr[5].price = 1250;
    brr[5].rating = 4.9;

    brr[6].bookId = 1006;
    strcpy(brr[6].bookName, "Control System");
    strcpy(brr[6].category, "electric");
    strcpy(brr[6].authorName, "arjun");
    brr[6].price = 754;
    brr[6].rating = 2.9;

    brr[7].bookId = 1007;
    strcpy(brr[7].bookName, "Electrical Power System");
    strcpy(brr[7].category, "electric");
    strcpy(brr[7].authorName, "jack");
    brr[7].price = 850;
    brr[7].rating = 3.6;

    brr[8].bookId = 1008;
    strcpy(brr[8].bookName, "DC Generators");
    strcpy(brr[8].category, "electric");
    strcpy(brr[8].authorName, "mike");
    brr[8].price = 1570;
    brr[8].rating = 4.5;
}

void hardCodedStudents(Student* srr, Book* brr){
    srr[0].studentId = 1;
    strcpy(srr[0].name, "Arjun");
    srr[0].bookIssued = brr[0];
    strcpy(srr[0].issuedDate, "27 12 2024");
    srr[0].mobileNo = 9081882565;

    srr[1].studentId = 2;
    strcpy(srr[1].name, "Rohit");
    srr[1].bookIssued = brr[1];
    strcpy(srr[1].issuedDate, "07 01 2025");
    srr[1].mobileNo = 7046265800;
    
    srr[2].studentId = 3;
    strcpy(srr[2].name, "Rishi");
    srr[2].bookIssued = brr[2];
    strcpy(srr[2].issuedDate, "25 12 2024");
    srr[2].mobileNo = 9775689450;
}

int calculate_days_difference_from_current(const char* date) {
    struct tm tm_given = {0}, tm_current = {0};
    time_t time_given, time_current;

    // Parse the given date
    sscanf(date, "%d %d %d", &tm_given.tm_mday, &tm_given.tm_mon, &tm_given.tm_year);

    // Adjust the month and year
    tm_given.tm_mon -= 1;        // tm_mon is 0-based
    tm_given.tm_year -= 1900;    // tm_year is years since 1900

    // Get the current date
    time(&time_current);
    tm_current = *localtime(&time_current);

    // Convert both dates to time_t
    time_given = mktime(&tm_given);

    // Calculate the difference in seconds and convert to days
    double difference = difftime(time_current, time_given);
    return (int)(difference / (60 * 60 * 24));
}

void sendMsgToStd(Student* srr, Book* tempBrr){
    for (int i = 0; i < 3; i++)
    {
        int diff = calculate_days_difference_from_current(srr[i].issuedDate);
        if(diff>15){
            printf("\nBook issued By \033[1;36m%s\033[0m:\n", srr[i].name);
            tempBrr[0] = srr[i].bookIssued;
            displayAllBooks(tempBrr, 1, 'i');
            printf("\n\033[1;35m----------------------------------------------------\033[0m\n");
            printf("Notice send to \033[1;33m%s\033[0m on mobile number \033[1;33m%lld\033[0m\n", srr[i].name, srr[i].mobileNo);
            printf("Message:- Hi \033[1;33m%s\033[0m, You have to pay fine of rs 50 for late submission of book with id \033[1;33m%d\033[0m which was issued on \033[1;31m%s\033[0m\n", srr[i].name, srr[i].bookIssued.bookId, srr[i].issuedDate);
            printf("\033[1;35m----------------------------------------------------\033[0m\n");
        }
    }
    
}

int main()
{
    int n;
    Book *brr = (Book *)malloc(50 * sizeof(Book));
    Book *tempBrr = (Book *)malloc(50 * sizeof(Book));

    Student *srr = (Student *) malloc(10 * sizeof(Student));

    // hardcoded values for testing
    storeHardCodedValues(brr);
    hardCodedStudents(srr, brr);
    // printf(__TIME__);

    printf("\n\t\033[1;35m Welcome to Library\033[0m\n\n");
    printf("Enter valid choice\n");
    fflush(stdin);
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
        printf("11. Send message to Students for book submission\n");
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
            fflush(stdin);
            unsigned int res = addBook(brr);
            if (res != 1)
            {
                printf("\033[1;31mError in adding book!\033[0m\n");
            }
            break;
        }
        case 2:
        {
            displayAllBooks(brr, bookIndex, 'g');
            break;
        }
        case 3:
        {
            int tempId;
            printf("Enter book id to search\n");
            scanf("%d", &tempId);
            fflush(stdin);
            int res = searchBookById(brr, tempBrr, tempId);
            if (res == -1)
                printf("\033[1;31mBook not Found! Try again with available id!!!\033[0m\n");
            else
                displayAllBooks(tempBrr, 1, 'i');
            break;
        }
        case 4:
        {
            searchBookByName(brr, tempBrr);
            break;
        }
        case 5:
        {
            fetchBooksByAuthor(brr, tempBrr);
            break;
        }
        case 6:
        {
            fetchBooksByCategory(brr, tempBrr);
            break;
        }
        case 7:
        {
            sortBookByPrice(brr, tempBrr);
            break;
        }
        case 8:
        {
            sortBookByRating(brr, tempBrr);
            break;
        }
        case 9:
        {
            displayAllBooks(brr, bookIndex, 'i');
            updateBookById(brr, tempBrr);
            break;
        }
        case 10:
        {
            int tempId;
            printf("\t\033[1;36m Available Book Ids\033[0m\n");
            displayAllBooks(brr, bookIndex, 'i');
            printf("Enter id of book you want to remove\n");
            scanf("%d", &tempId);
            fflush(stdin);
            int indexOfBook = searchBookById(brr, tempBrr, tempId);
            if(indexOfBook == -1) break;
            int res = removeBook(brr, indexOfBook);
            (indexOfBook != -1) ? printf("\033[1;32mBook with id-> \033[1;33m%d\033[0m \033[1;32mdeleted successfully...!\033[0m\n", res) : printf("\033[1;31mBook not found with such id! Try again with valid book id.\033[0m\n");
            break;
        }
        case 11: {
            sendMsgToStd(srr, tempBrr);
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