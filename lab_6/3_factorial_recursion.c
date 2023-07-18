// WAP to calculate factorial using Recursion.


#include <stdio.h>

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);// 5 ko factorial nikalna xa vaneya:
                                        // 5* factorial(4)
                                        // 5*4*factorial(3)
                                        // 5*4*3*factorial(2)
                                        // 5*4*3*2*factorial(1)
                                        //  5*4*3*2*1
    }
}

int main() {
    int n;
    printf("Enter a number you want factorial of: \n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(n);
        printf("Factorial of %d is: %d\n", n, result);
    }

    return 0;
}
