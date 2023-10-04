//Merge Sort
#include <stdio.h>

void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);

int main()
{
    int arr[100], n, i;

    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    mergeSort(arr, 0, n - 1); //calling mergersort function

    printf("\nSorted array in ascending order:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k, b[100];
    i = l;
    j = m+1;
    k = l;
    
    while(i <= m && j <= r)
    {
        if(arr[i] <= arr[j])
        {
            b[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    if(i > m)
    {
        while(j <= r)
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i <= m)
        {
            b[k] = arr[i];
            i++;
            k++;
        }
    }
    for(k = l; k <= r; k++)
    {
        arr[k] = b[k];
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
