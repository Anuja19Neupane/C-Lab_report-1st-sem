// WAP to display sum of series: x + x2/2! + x3/3! + x4/4! + x5/5! ... xn/n!.
// User definedfunction factorial() and power() should be used to calculate the factorial and power.

# include <stdio.h>

// function for factorial
void factorial(int num,  int *result)
{
    int fact=1;
    while (num>0)
    {
        fact=fact*num;
        num--;
    }
}
 

// function for power
float power(float base , int exponent)
{
    float result=1.0;
    for (int i = 0; i < exponent; i++) // i=0 initialize gareko xa so i<exponent gareko xa
                                // yesko alternative is: (int i = 1; i <= exponent; i++)
    {
        result *= base;
    }
    return result;

}



int main()
{
    int n;
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    float sum = 0.0;
    for (int i = 1; i <= n; i++) {
        int fact;
        factorial(i, &fact);
        float term = power(x, i) / fact;
        sum += term;
    }

    printf("Sum of the series: %f\n", sum);

    return 0;
}