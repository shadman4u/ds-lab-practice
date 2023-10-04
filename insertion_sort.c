//Insertion Sort
#include <stdio.h>

void insertionSort(int arr[], int n);

int main()
{
    int arr[100], n, i;

    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("[%d]: ",i);
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n); //calling the sorting function

    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void insertionSort(int arr[], int n)
{
    int i,temp,j;

    for (i = 1; i < n; i++) // loop for increment order
    {
        temp = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > temp) // loop for decrement order
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
