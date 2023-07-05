// wap to read 10 numbers from users and find their sum and average.
#include <stdio.h>
int main()
{
    int a, sum=0;
    float average=0;
    printf("Enter the numbers to find the sum:\n");
    for (int i=0;i<10;i++)
    {
        scanf("%d",&a);
        sum=sum+a;
        average=(float)sum/10;
    }
    printf("Your sum is %d.\n",sum);
    printf("Your Average is %.2f.\n",average);
    return 0;
} 