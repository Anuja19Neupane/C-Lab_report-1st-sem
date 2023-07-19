// WAP to take two numbers in main(). Write a function Swap() to swap the values of
// the variables. Print the swapped values in main().

#include <stdio.h>

// swap function
void swap_numbers(int *num1, int *num2)
// pointer  nadida function le value modify garna paudaina cuz yesma address ko kura aauxa
{
    int temp = *num2;
    *num2 = *num1;
    *num1 = temp;
}

int main()
{
    int num_1, num_2;
    printf("Enter the two numbers you want to swap: ");
    scanf("%d%d", &num_1, &num_2);

    printf("Before swapping: %d %d\n", num_1, num_2);

    // aba function call garxu ani after  swapping ma apply hunxa and that will be our required result

    swap_numbers(&num_1, &num_2); // function call
    // if '&'is not ussed: memory adress ko thau ma values recieve hunxa nai swap hudaina

    printf("After swapping: %d %d\n", num_1, num_2);

    return 0;
}