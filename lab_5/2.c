// WAP to display the multiplication table of integer giver by a user

#include <stdio.h>
int main(){
    int i,n,answer;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        answer = i * n;
        printf("%d * %d = %d\n",n,i,answer);
    }
    return 0; 

}