    // WAP to print the following patterns:
    // a.      1
     //        1 2
      //       1 2 3
        //     1 2 3 4
        //     1 2 3 4 5


#include<stdio.h>
int main(){
    int row,column,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(row=1; row<=n; row++){
        for(column = 1; column <=row; column++){
            printf("%d\t",column);
        }
        printf("\n");
    }
    return 0;
}

            
