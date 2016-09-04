#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float a = -2.3;

    float x;

    printf("Enter x\n");
    scanf("%f",&x);
//¬вожу новую переменную с результатом работы
    float f;

    if(x>=0 && x<=4)
    {
        if(x>2)
        {
            f = pow((x + a), 1.0/5);
        }
        else if(x>0.3 && x<=2)
        {
            f = x;
        }
        else if(x<=0.3)
        {
            f = cos(x-a);
        }
        printf("f = %f",f);
    }
    else
    {
        printf("Warning!!! x>4 or x<0");
    }

    getch();
}
