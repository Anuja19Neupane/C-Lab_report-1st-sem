// WAP to input a integer number in main(). Write a user define function isPrime() to
// calculate whether the number is prime of not. Print whether the number is prime or
// not from the main().


#include <stdio.h>

int isPrime(int num)
{ 
    if (num<=1)
    {
        return 0;
    }
    for(int i=2;i<=num/2;i++)
    {
        if (num%i==0)
        {
            return 0;// prime haina so return 0 cuz we want prime numbers
        }
    }
    return 1;
}
int main()
{
    int number;
    printf("Enter the number: \n",number);
    scanf("%d",&number);

    // function call
     int is_prime=isPrime(number);

    if (is_prime)
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);
    return 0;
}