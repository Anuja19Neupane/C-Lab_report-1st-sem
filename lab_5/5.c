// WAP to display the sum of series 1 + 1/2! + 1/3! + 1/4! + .... 1/n!:
#include <stdio.h>
int factorial(int n);
int main()
{
    int n, num_fact, i;
    float sum = 0;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (1.0 / (i * factorial(i)));
    }
    printf("The value of sum is:%.2f\n", sum);

    int result = factorial(n); // function call
}
int factorial(int n) // Function definition
{
    int fact = 1;
    while (n > 0)
    {
        fact *= n;
        n--;
    }
    return fact;
}
