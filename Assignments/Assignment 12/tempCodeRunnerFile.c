oc(n3 * sizeof(int));
    for (int i = 0; i < size1+size2 ; i++)
    {
        arr3[i] = i<size1 ? arr1[i] : arr2[i-size1];
    }
    arr3;
}

int main(){
    int n1;
    printf("Enter the size of an array1:\n");
    scanf("%d", &n1);
