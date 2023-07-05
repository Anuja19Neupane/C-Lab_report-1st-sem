// wap to display whether a number is even or odd using conditional operator

# include <stdio.h>
int main()
{
    int num,even,odd;
    printf("Enter a number: ",num);
    scanf("%d",&num);
    (num%2==0)? printf("Even"):printf("Odd");
    return 0;
}