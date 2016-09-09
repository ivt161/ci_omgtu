#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

void main()
{
    float x,y,r,N;
    start:;
    printf("Enter x, y and radius circle: \n");

    scanf("%f%f%f",&x,&y,&r);

    y = pow(x, 2) + pow(y, 2);

    N = (sqrt(y)>r) ? 0 : 1;

    (N) ? printf("on the circle \n") : printf("after circle \n");

}
