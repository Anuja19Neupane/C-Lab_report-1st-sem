// WAP to display the nth Fibonacci number using recursion.



#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        printf("Please enter positive integer.\n");
        return -1;
    }
    else if (n == 1) {
        return 0;
    }
    else if (n == 2) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2); //1st term + 2nd term= 3rd term
                                                //2nd term + 3rd term= 3rd term
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int fib_number = fibonacci(n);// function call

    if (fib_number != -1) {
        printf("The %dth Fibonacci number is: %d\n", n, fib_number);
    }

    return 0;
}
