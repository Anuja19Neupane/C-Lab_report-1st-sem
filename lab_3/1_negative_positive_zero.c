//WAP to check whether a number is nagetive,positive or zero.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if (num>0)
    {
        printf("POSITIVE\n");
    }
    else if(num<0)
    {
        printf("NEGATIVE\n");
    }
    else
    {
        printf("ZERO\n");
    }
    return 0;
}