//Selection Sort
#include<stdio.h>

void selectionSort(int arr[], int n);

int main()
{
    int arr[100],n,i;

    printf("Enter number of elements to sort: ");
    scanf("%d",&n);

    printf("Enter %d integers: \n",n);
    for(i = 0; i < n; i++)
    {
        printf("[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    selectionSort(arr,n); //calling sorting function

    printf("Sorted in ascending order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[], int n)
{
    int i,j,temp,min_idx;

    for(i = 0;i < n - 1; i++) //using 'n-1' to reduce execution time 
    {
        min_idx = i;
        for(j = i + 1;j < n; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}