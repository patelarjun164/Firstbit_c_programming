    #include <stdio.h>

    void displayArr(int arr[], int size)
    {
        for (int i = 0; i < size; i++)
            printf("%d ", arr[i]);
    }

    void storeArr(int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            printf("Enter the value for index %d: ", i);
            scanf("%d", &arr[i]);
        }
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

    int main()
    {
        int n;
        printf("Enter the size of an array:\n");
        scanf("%d", &n);

        int arr[n];

        // taking arr from user
        printf("-----Enter values for Array 1-----\n");
        storeArr(arr, n);

        // reverse array
        reverseArray(arr, n);

        // printing array
        displayArr(arr, n);

        return 0;
    }