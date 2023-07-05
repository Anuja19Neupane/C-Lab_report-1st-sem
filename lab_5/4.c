// WAP to display the sum of series 1 + 1/2 + 1/3 + 1/4 + .... 1/n:
# include <stdio.h>
int main()
{
    int n,i;
    float sum=0;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
    }
    printf("The value of sum is:%f\n",sum);
    return 0;
}