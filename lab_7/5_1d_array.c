// WAP to pass 1D array to the minmax() function. The function should calculate the
// maximum and minimum among the elements of the array. Print the maximum and
// minimum in the main() function.

#include <stdio.h>

void minmax(int arr[], int n, int *min, int *max) 
                // min ra max tala main function ma pai use garna ko lagi * also used
{
    *min = arr[0];// *min lai first element of the array ma initialize gareko
    *max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }

        if (arr[i] > *max)
        {
            *max = arr[i];
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int min, max;

    // Call the minmax function to calculate the minimum and maximum elements
    minmax(array, n, &min, &max);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    

    return 0;
}
