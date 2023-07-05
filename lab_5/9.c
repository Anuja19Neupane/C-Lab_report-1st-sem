// WAP to display the first n terms of Fibonacci series.
#include <stdio.h>
int main()
{
    int n, first = 0, second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: \n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n ", first);
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}