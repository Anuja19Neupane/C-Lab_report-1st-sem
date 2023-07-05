//wap to check whether the year entered by the user is leap year or not.

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year check, for leap year: year should be divided by 4 with no remainder,year should be divided by 100 with remainder
    // or if the year is divided by 400 with no remainder
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
