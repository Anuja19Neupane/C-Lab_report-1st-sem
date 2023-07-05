// wap to get a character from the user using unformatted i/o and display the ascii value of the entered character.

# include <stdio.h>
int main()
{
    char ch;
    int ascii_value;
    puts("Enter a character:\n");
    ch=getchar();
    ascii_value=ch; // assigns the ASCII value of the character stored in ch to the variable acsii_value
    printf("The ascii value of %c is %d\n",ch,ascii_value);
    return 0;
}