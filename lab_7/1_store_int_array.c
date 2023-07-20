// WAP to store 10 integer elements in an array and print it.

#include <stdio.h>

int main()
{
    int array[10]; // 10 ota array hunxa vanera initialize gareko
    printf("Enter 10 integers: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("The elements you entered are: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}