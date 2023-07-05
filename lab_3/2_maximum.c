// wap to find the maximum number among three numbers entered by the user

#include <stdio.h>
int main()
{
    int a, b, c, largest;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b, a > c)
    {
        printf("%d is the largest number.\n", a);
    }
    else if(b>a,b>c)
    {
        printf("%d is the largest number.\n",b);
    }
     else if(c>a,c>b)
    {
        printf("%d is the largest number.\n",c);
    }
    else{
        printf("All numbers are equal.\n");
    }
    return 0;

}