// WAP to sort n elements of array in descending order.

#include <stdio.h>

void sort_by_descending(int arr[],int n)//bubblesort use gareko
{
      for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                // Swap the elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of array elements: \n");
    scanf("%d",&n);

    int array[n];
    printf("Enter the elements: \n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    sort_by_descending(array, n);

    printf("Sorted array in descending order: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
    
}