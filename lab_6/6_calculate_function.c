// WAP to take two float number in main(). Write a  user define function
// calculator() to perform the addition, subtraction and multiplication. The sum,
// difference and product should be displayed from the main() function. [Use the
// concept of pass by reference.].

#include <stdio.h>

void calculator(float num1,float num2, float *sum, float *diff, float *product)
{
    *sum = num1 + num2; 
    *diff = num1 - num2;
    *product = num1 * num2;
}


int main()
{
    float num_1, num_2;
    float sum, diff, product;

    printf("Enter the two float numbers: ");
    scanf("%f %f", &num_1, &num_2);

    // Call the calculator function and pass the addresses of sum, diff, and product
    calculator(num_1, num_2, &sum, &diff, &product);

    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", diff);
    printf("Product: %.2f\n", product);

    
    return 0;

}