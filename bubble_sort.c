//Bubble Sort
#include <stdio.h>

void bubbleSort(int arr[], int n);

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

    bubbleSort(arr, n); //calling sorting function

    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    printf("\n");

    return 0;
}

void bubbleSort(int arr[], int n)
{
    int i, j, temp,flag;

    for (i = 0; i < n - 1; i++)
    {
        flag = 0; //using flag so that if there is no swapping we can stop it
        for (j = 0; j < n - i - 1; j++) //using "-i" to reduce reduce excecution time
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
}
