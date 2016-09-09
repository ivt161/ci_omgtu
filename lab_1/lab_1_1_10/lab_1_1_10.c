#include <stdio.h>
#include <math.h>
#include <conio.h>

#define a 0.5
#define b 2.9
#define c 1.5

void main()
{

    float x, w;

    printf("Enter x: \n");

    scanf("%f",&x);

    float y = b * x;

    w = (a * x + pow(2, -x) * cos(y))/(y - exp(-x) * sin(y) + c);

    printf("w = %5.4f",w);

    getch();


}
