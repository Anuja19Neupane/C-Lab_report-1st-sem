// WAP to input two integer values from the user and print the even number between the range of integers.
 // And also count the even number and displays the count as well.

#include <stdio.h>
int main()
{
    int num1,num2,i,result;
    int count=0;
    printf ("Enter the numbers:\n");
    scanf ("%d%d",&num1,&num2);
    for (i=num1;i<num2;i++)
    {
        if (i%2==0)
        {
            count++;
            printf("%d\t",i);
        }
    }
    printf("\n Number of even numbers: %d\n",count);
    return 0;
       
}

