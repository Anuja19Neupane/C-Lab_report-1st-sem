/* wap to calc. area and vol. of a cylinder using pre-processor directive for value of pi. */

#include <stdio.h>
#include <math.h>
#define pi 3.1415
int main()
{
    float radius,height,area,volume;
    printf("Enter radius and height of cylinder respectively:\n");
    scanf("%f%f",&radius,&height);
    area=(2*pi*pow(radius,2))+(2*pi*radius*height);
    printf("The area is:%f\n",area);
    volume=pi*pow(radius,2)*height;
    printf("The volume is:%f\n",volume);
    return 0;

}