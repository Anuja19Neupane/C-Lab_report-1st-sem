// Write a program to add, subtract, multiply and divide two integers using user defined
// function add(), sub(), mul() and div().

#include <stdio.h>

void add(int num1, int num2, int *result) // yaha pointer kina use gareko vaney,
                                //yesle main function ma pani euta copy banauxa
{
    *result = num1 + num2;
}
void subtraction(int num1, int num2, int *result)
{
    *result = num1 - num2;
}
void multiply(int num1, int num2, int *result)
{
    *result = num1 * num2;
}
void division(int num1, int num2, int *result)
{
    if (num2 != 0)
    {
        *result = num1 / num2;
    }
}

int main()
{
    int num_1, num_2, operator, result;
    printf("Enter two numbers you would like to do operation with:\n");
    scanf("%d %d", &num_1, &num_2);
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division:");
    scanf("%d", &operator);
    // switch case use garda ni hunxa tara i like if() elseif()
    if (operator== 1)
    {
        add(num_1, num_2, &result); // function call
        printf("Addition:%d\n", result);
    }
    else if (operator== 2) // mero agi k mistake ho vaney i used elif, tyo python ko ho
    {
        subtraction(num_1, num_2, &result); // function call
        printf("Subtraction:%d\n", result);
    }
    else if (operator== 3)
    {
        multiply(num_1, num_2, &result); // function call
        printf("Product:%d\n", result);
    }

    else if (operator== 4)
    {
        division(num_1, num_2, &result); // function call
        printf("Division:%d\n", result);
    }
    else
    {
        printf("Invalid operator.\n");
    }

    return 0;
}