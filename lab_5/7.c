// WAP to find the value cos(x) without using cos(x) library function.
#include <stdio.h>
#include <math.h>

float calculateCos(float x, int numTerms);

int main()
{
    float x, result;
    int numTerms;

    printf("Enter the value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter the number of terms to use: ");
    scanf("%d", &numTerms);

    result = calculateCos(x, numTerms);

    printf("cos(%.2f) = %.4f\n", x, result);

    return 0;
}

float calculateCos(float x, int numTerms)
{
    float sum = 1.0; // First term of the series is always 1.0
    float term = 1.0; // Current term being added/subtracted
    int i;

    for (i = 1; i <= numTerms; i++)
    {
        term *= -1.0 * x * x / (2 * i * (2 * i - 1));
        sum += term;
    }

    return sum;
}
