/* wap to declare integer,float and character variable.
 initialize them with certain value and print those values.
also display the size of variables. */

#include <stdio.h>
int main()
{
    unsigned int integer;
    float floating_value;
    char character;
    integer = 34;
    floating_value = 29.99;
    character = 's';
    char a = 5;
    short b = 75539;
    printf("Integer:%d\n", integer);
    printf("Integer:%hd\n", b);
    printf("Float:%f\n", floating_value);
    printf("Character:%d\n", character);
    printf("Size of integer is:%lu\n", sizeof(int)); // here sizeof() is operator
    printf("Size of float is:%lu\n", sizeof(float));
    printf("Size of character is:%lu\n", sizeof(char));
    printf("Size of short is:%lu\n", sizeof(short));

    return 0;
}