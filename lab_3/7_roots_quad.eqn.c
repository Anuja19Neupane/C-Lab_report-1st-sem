//WAP to find all the roots of a quadratic equation.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2;

    printf("Enter coefficients (a, b, c) of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check the value of discriminant
    if (discriminant > 0) {
        // Real and distinct roots
        root1 = (-b + sqrtf(discriminant)) / (2 * a);//sqrtf is for float
        root2 = (-b - sqrtf(discriminant)) / (2 * a);

        printf("Roots are real and distinct:\n");
        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    } else if (discriminant == 0) {
        // Real and equal roots
        root1 = -b / (2 * a);

        printf("Roots are real and equal:\n");
        printf("Root 1: Root 2: %.2f\n", root1);
    } else {
        // Complex roots
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrtf(-discriminant) / (2 * a);

        printf("Roots are complex and conjugate:\n");
        printf("Root 1: %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2: %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}
