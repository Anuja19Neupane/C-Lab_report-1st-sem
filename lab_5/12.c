// WAP to find HCF and LCM of two numbers:

#include <stdio.h>
int main()
{
    int first_number, second_number, min, hcf=1, lcm;
    printf("Enter two numbers:  ");
    scanf("%d%d", &first_number, &second_number);
    min = (first_number < second_number) ? first_number : second_number;
    for (int i = 1; i <= min; i++)
    {
        if (first_number % i == 0 && second_number % i == 0)
        {
            hcf = i;
        }
    }
    printf("HCF = %d", hcf);
    lcm = (first_number * second_number) / hcf;
    printf("\nLCM = %d\n", lcm);
    return 0;
}
