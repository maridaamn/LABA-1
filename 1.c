#include <stdio.h>

int main()

{
    float r,h,sb,sp,v,Pi=3.14;

    printf ("Radius = ");
    scanf("%f", &r);
    printf ("Visota = ");
    scanf("%f", &h);

    sb = 2*Pi*h*r;
    sp = sb+2*Pi*r*r;
    v = Pi*r*r*h;

printf("Ploshad b = %.2f\n"
"Ploshad p = %.2f\n"
"V = %.2f\n", sb,sp,v);
    
    return 0;
}