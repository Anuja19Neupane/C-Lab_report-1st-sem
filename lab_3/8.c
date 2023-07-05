// WAP to input two numbers and operator among [ + , - ,* , / ]. If user enters + then the
// program should perform the addition of the number and display the sum. If user enters
// – then the program should perform subtraction of number and display the difference
// and so on for * and /

#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    int result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Sum: %d\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Difference: %d\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Product: %d\n", result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Quotient: %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}

