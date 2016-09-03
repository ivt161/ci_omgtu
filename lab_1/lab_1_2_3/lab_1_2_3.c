#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{

    float m1,m2,m3;

    float x1,x2,x3,y1,y2,y3;

    printf("Enter weight and coordinates first point \n");

    scanf("%f %f %f",&m1,&x1,&y1);

    printf("Enter weight and coordinates second point \n");

    scanf("%f %f %f",&m2,&x2,&y2);

    printf("Enter weight and coordinates third point \n");

    scanf("%f %f %f",&m3,&x3,&y3);

    float x = (x1 * m1 + x2 * m2 + x3 * m3)/(m1 + m2 + m3);
    float y = (y1 * m1 + y2 * m2 + y3 * m3)/(m1 + m2 + m3);

    printf("x = %.2f, y = %.2f", x, y);

    getch();
}
