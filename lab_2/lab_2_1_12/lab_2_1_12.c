#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float b=-2.9;

    float x;

    printf("Enter x\n");
    scanf("%f",&x);

    float y;

    if(x>=0 && x<=2)
    {
        if(x > 1)
        {
            y = fabs(exp(-2 * x) * sin(b * x));
        }
        else if(x = 1)
        {
            y = cos(b * x);
        }
        else if(x < 1)
        {
            exp(-x) * cos(b * x);
        }
        printf("y = %f",y);
    }
    else
    {
        printf("Warning!!! x>2 or x<0");
    }

    getch();
}
