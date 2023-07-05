/* wap to input two numbers from user and display the min using conditional operator. */

#include <stdio.h>

int main()
{
    int input_1, input_2, minimum_value;
    printf("Enter any two numbers: ");
    scanf("%d%d", &input_1, &input_2);

    minimum_value = (input_1 < input_2) ? input_1 : input_2;

    printf("The minimum number is %d\n", minimum_value);

    return 0;
}
