// WAP to get your name, address and display using unformatted I/O.
#include <stdio.h>
int main()
{
    char name[35],address[60];
    puts ("Enter your name and adress:\n");
    gets(name);
    gets(address);
    puts("The entered name is:\n");
    puts(name);
    puts("The entered address is:\n");
    puts(address);
    return 0;

}