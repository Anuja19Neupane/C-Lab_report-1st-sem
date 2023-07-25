// WAP to count the frequency of the elements in an array.


// array ma kun kun number keti palta repeat hudeixa vanera check garney.  

#include <stdio.h>

void find_frequency(int arr[], int n)
{
    int frequency[100] = {0}; // 2 digit array elements matra let gareko xa

    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++; // frequency lai increment garna ko lagi
    }

    printf("Frequency of elements:\n");
    for (int i = 0; i < 100; i++)
    {
        if (frequency[i] > 0)
        {
            printf("Element %d occurs %d time(s)\n", i, frequency[i]);
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

    find_frequency(array, n);

    return 0;
}
