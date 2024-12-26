#include <stdio.h>

void storeArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter value for index %d: ", i);
        scanf("%d", &arr[i]);
    }
}

void printArr(int arr[], int size)
{
    printf("[ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ,", arr[i]);
    }
    printf("\b ]");
}

int searchValue(int arr[], int size, int searchVal)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == searchVal)
            return i;
    }
    return -1;
}

void reverseArray(int arr[], int n)
{
    for (int i = 0; i <= n / 2; i++)
    {
        int temp = arr[i];       // 1 2
        arr[i] = arr[n - i - 1]; // a[0] = a[3-0-1] = a[2] = 3 2
        arr[n - i - 1] = temp;   // a[2] = temp = 1 2

        // printf("%d ", arr[i]);
    }
}

int sumOfAllELe(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

void printOddEven(int arr[], int size)
{
    // print even number
    printf("--------Even Nums in Array-------\n");
    for (int i = 0; i < size; i++)
    {
        !(arr[i] % 2) && printf("%d ", arr[i]);
    }
    // print odd number
    printf("\n--------Odd Nums in Array-------\n");
    for (int i = 0; i < size; i++)
    {
        arr[i] % 2 && printf("%d ", arr[i]);
    }
}

void printAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
        printf("%d ", arr[i]);
}

void checkPrime(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
            continue;
        int isPrime = 1;
        for (int j = 2; j * j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        isPrime &&printf("%d ", arr[i]);
    }
}

void sortArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void findSumInThirdArr(int arr[], int brr[], int size)
{
    int crr[size];
    for (int i = 0; i < size; i++)
    {
        crr[i] = arr[i] + brr[i];
        printf("%d ", crr[i]);
    }
}

void mergeArr(int arr1[], int size1, int arr2[], int size2)
{
    int arr3[size1+size2];
    for (int i = 0; i < size1 + size2; i++)
    {
        arr3[i] = i < size1 ? arr1[i] : arr2[i - size1];
        printf("%d ", arr3[i]);
    }
}

int main()
{
    int n, choice;
    printf("Enter the size of array\n");
    scanf("%d", &n);

    int arr[n];
    storeArr(arr, n);

    printf("Enter the choice from below menu\n");
    printf("Press 1 for print array\n");
    printf("Press 2 for search number in array\n");
    printf("Press 3 to find sum of all nums in array\n");
    printf("Press 4 to print odd and even numbers in array\n");
    printf("Press 5 to print alternate numbers in array\n");
    printf("Press 6 to print prime numbers in array\n");
    printf("Press 7 to reverse an array\n");
    printf("Press 8 to sort an array\n");
    printf("Press 9 to add 2nd array in third an array\n");
    printf("Press 10 to merge two an array\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printArr(arr, n);
    }
    else if (choice == 2)
    {
        int searchVal;
        printf("Enter the value you want to search\n");
        scanf("%d", &searchVal);
        printf("%d is found at index %d\n", searchVal, searchValue(arr, n, searchVal));
    }
    else if (choice == 3)
    {
        int sum = sumOfAllELe(arr, n);
        printf("Sum of all elements of array is %d", sum);
    }
    else if (choice == 4)
    {
        printOddEven(arr, n);
    }
    else if (choice == 5)
    {
        printAlternate(arr, n);
    }
    else if (choice == 6)
    {
        checkPrime(arr, n);
    }
    else if (choice == 7)
    {
        reverseArray(arr, n);
    }
    else if (choice == 8)
    {
        sortArray(arr, n);
    }
    else if (choice == 9)
    {
        int brr[n];

        // taking brr (2) from user
        printf("------Array 2 - brr --------\n");
        storeArr(brr, n);

        // find sum and adding in crr in respective element
        findSumInThirdArr(arr, brr, n);
    }
    else if (choice == 10)
    {
        int n2;
        printf("Enter size of array brr\n");
        scanf("%d", &n2);

        int brr[n2];
        storeArr(brr, n2);

        mergeArr(arr, n, brr, n2);
    }
    else printf("Invalid Choice...!!!\n");

    return 0;
}