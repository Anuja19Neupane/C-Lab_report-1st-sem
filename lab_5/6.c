// WAP to display sum of series: x + x^2 /2! + x^3 /3! + x^4 /4! + x^5 /5! ... x^n /n!:

#include <stdio.h>
#include <math.h>
int factorial(int n);
int main()
{
    int x,n,i;
    float sum = 0;
    printf("Enter the value of n:\n");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        sum = sum +(pow(x,i)/factorial(i));
    }
    printf("The value of sum is:%.2f\n", sum);

    int result = factorial(n); // funtion call
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

