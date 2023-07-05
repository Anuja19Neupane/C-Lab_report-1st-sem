// wap to input a character from the user and check whether the character is vowel and constant.
#include <stdio.h>
int main()
{
    int alphabet;
    printf("Enter a character: \n");
    scanf("%c", &alphabet);
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
    {
        printf("VOWEL.\n");
    }
    else
    {
        printf("CONSONANT\n");
    }
    return 0;
}