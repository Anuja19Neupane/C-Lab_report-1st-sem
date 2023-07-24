// WAP to calculate and print the sum and average of n elements of array.

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of array elements: \n");
    scanf("%d",&n);

    int array[n];
    printf("Enter the array elements: \n");
    for(int i =0;i<n;i++)
    {
        scanf("%d", &array[i]);
    }

    int sum=0;
      for(int i =0;i<n;i++)
    {
        sum+=array[i];
    }


    float average=(float)sum/n;
    printf("Sum of elements: %d\n", sum);
    printf("Average of elements: %.2f\n", average);

    return 0;

}

