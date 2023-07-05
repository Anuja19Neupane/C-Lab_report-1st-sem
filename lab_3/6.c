// WAP to check whether the number entered by the user is divisible by 5 and 11 or not.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if (num%5==0 && num%11==0)
    {
        printf("%d is divided by both 5 and 11.\n",num);
    }
    else if(num%5==0)
    {
        printf("%d is divided by 5 only.\n");
    }
    else if(num%11==0)
    {
        printf("%d is divided by 11 only.\n");
    }
    else
    {
        printf("%d is not divided by both 5 and 11.\n",num);
    }
    return 0;
}