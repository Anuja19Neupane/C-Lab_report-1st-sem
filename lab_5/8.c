// WAP to display weather a number is Armstrong or not.
#include<stdio.h>
int main(){
    int n,rem,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int number = n;
    while(n!=0)
    {
        rem = n % 10;
        sum+= rem*rem*rem;
        n/=10;
    }
    if(sum == number)
    {
        printf("%d is armstrong\n",number);
    }
    else
    {
        printf("%d is not armstrong\n",number);
    }
    return 0;
}