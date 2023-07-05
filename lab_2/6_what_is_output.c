// what is output of this
#include <stdio.h>
int main()
{
    int a=5,b=9;
    printf("a=%d,b=%d\n",a,b);
    printf("a&b=%d\n",a&b); // bitwise AND operator
    printf("a/b=%d\n",a/b); // integer division
    printf("a^b=%d\n",a^b); // bitwose XOR    0101 XOR 1001 = 1100
    printf("~a=%d\n",~a); // bitwise NOT operator, 0000 0101 ~a = 1111 1010
                            // In two's complement representation, 
                            // the most significant bit being 1 indicates a negative value. 
                            // So, the binary value 1111 1010 represents the decimal value -6.
    printf("(b<<2)+(a<<1)=%d\n",(b<<2)+(a<<1));
    printf("(b>>1)+(a>>1)=%d\n",(b>>1)+(a>>1));
    return 0;

}


/*Binary representation of 5: 0000 0101
Binary representation of 9: 0000 1001

When we perform the left shift operation (<<) on a binary number,
 the bits are shifted to the left by the specified number of positions. 
 Zeros are shifted in from the right, and the leftmost bits are discarded.

In this case, (b<<2) shifts the bits of b two positions to the left:
0000 1001 << 2 = 0010 0100

And (a<<1) shifts the bits of a one position to the left:
0000 0101 << 1 = 0000 1010

Then, we add the shifted values together:
0010 0100 + 0000 1010 = 0010 1110

The binary value 0010 1110 represents the decimal value 46.
 Therefore, the line printf("(b<<2)+(a<<1)=%d\n",(b<<2)+(a<<1)); 
will print "(b<<2)+(a<<1)=46\n".*/