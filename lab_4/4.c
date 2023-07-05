// WAP to display the output as below using formatted i/o [take char a[]="I Love Nepal"].
// I
// I L
// I LO
// I LOV
// I LOVE
// I LOVE N
// I LOVE NE
// I LOVE NEP
// I LOVE NEPA
// I LOVE NEPAL

#include <stdio.h>
int main()
{
    char a[] = "I LOVE NEPAL";
    printf("%.1s\n", a);
    printf("%.3s\n", a);
    printf("%.4s\n", a);
    printf("%.5s\n", a);
    printf("%.6s\n", a);
    printf("%.8s\n", a);
    printf("%.9s\n", a);
    printf("%.10s\n", a);
    printf("%.11s\n", a);
    printf("%.12s\n", a);
    return 0;
}