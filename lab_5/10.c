// WAP to display a number in reverse order:

#include<stdio.h>
int main()
{
    int n,reversed_number = 0,rem;
    printf("Enter more than one digit number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem = n % 10;
        reversed_number = reversed_number*10 + rem;
        n = n/10;
    }
    printf("Reverse is %d ",reversed_number);
    return 0;
}