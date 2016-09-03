#include <stdio.h>
#include <math.h>
#include <conio.h>

void main()
{

    float r,v,s;

    printf("Enter radius: ");
    scanf("%f",&r);

    v = 4.0/3 * pow(r, 3) * M_PI;
    s = M_PI * pow(r, 2);

    printf("S = %f, V = %f",s,v);

}
