// WAP to check whether a number is palindrome or not:

// paliindrome:a word, sentence, verse, or even number that reads the same backward or forward
#include<stdio.h>
int main(){
    int n,digit,reversed_nuumber=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int temp_num = n;
    while (n!=0){
        digit = n % 10;
        reversed_nuumber = reversed_nuumber * 10 + digit;
        n = n/10;
    }
    if(reversed_nuumber==temp_num ){
        printf("%d is palindrome number",temp_num );
    }
    else{
        printf("%d is not palindrome number",temp_num );
    }
    return 0;
}