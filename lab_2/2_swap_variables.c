 /* wap to swap the valueof variables with and without using third variable. */

 // withh third party

//  #include <stdio.h>5
//  int main()
//  {
//     int a,b,temp;
//     printf("Enter the values of a and b:\n");
//     scanf("%d%d",&a,&b);
//     printf("Before swapping a=%d,b=%d\n",a,b);
//     temp=a;
//     a=b;
//     b=a;
//     printf("After swapping a=%d,b=%d\n",a,b);
//     return 0;

//  } 

// without third party4
#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

