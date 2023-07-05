// wap to calc. area of circle.

#include <stdio.h>
#include <math.h> //pow is in math.h library
int main()
{
    float area,radius,pi;
    pi=3.1415;
    radius=5.3;
    area=pi*pow(radius,2);
    printf("Area of circle is:%f.\n",area);
    return 0;
    
}