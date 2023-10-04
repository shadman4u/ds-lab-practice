//Linear Search
#include <stdio.h>

int linearSearch(int arr[], int n, int key);

int main()
{
    int arr[100], n, i, key;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("[%d]: ",i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    int idx = linearSearch(arr, n, key);

    if (idx == -1)
        printf("Element not found in the array\n");
    else
        printf("Element found at index %d in the array\n", idx);

    return 0;
}

int linearSearch(int arr[], int n, int key)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}
