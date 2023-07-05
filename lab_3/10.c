// WAP to input a number from user. If user enters a number less than or equal to zero
// then program should just display the number. If user enters 1 the program should
// display output as neither prime nor composite, if user enters 2 the program should
// display output as smallest and only even prime number. If user enters any number
// greater than 2 the program should check whether the number is prime or not, also if
// the number is not prime the program should display whether it is even or odd.

#include <stdio.h>

int main() {
    int number;
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Number: %d\n", number);
    } else if (number == 1) {
        printf("Neither prime nor composite.\n");
    } else if (number == 2) {
        printf("Smallest and only even prime number.\n");
    } else {
        for (int i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("Prime number.\n");
        } else {
            printf("Composite number.\n");

            if (number % 2 == 0) {
                printf("Even number.\n");
            } else {
                printf("Odd number.\n");
            }
        }
    }

    return 0;
}
