//Binary Search
#include <stdio.h>

int binarySearch(int arr[], int l, int r, int key);

int main()
{
    int arr[100], n, i, key;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers in ascending order:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("[%d]: ",i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    int idx = binarySearch(arr, 0, n - 1, key);

    if (idx == -1)
        printf("Element not found in the array\n");
    else
        printf("Element found at index %d in the array\n", idx);

    return 0;
}

int binarySearch(int arr[], int l, int r, int key)
{
    if (l <= r)
    {
        int mid = (l + r) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] > key)
            return binarySearch(arr, l, mid - 1, key);

        return binarySearch(arr, mid + 1, r, key);
    }

    return -1;
}
