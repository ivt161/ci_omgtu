#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float a = -0.5;
    float b = 2;

    float t;

    printf("Enter t\n");
    scanf("%f",&t);
//¬вожу новую переменную с результатом работы
    float z;

    if(t>=0 && t<=3)
    {
        if(t>=1 && t<=2)
        {
            z = a * pow(t, 2) * log(t);
        }
        else if(t<1)
        {
            z = 1;
        }
        else if(t>2)
        {
            z = exp(a * t) * cos(b * t);
        }
        printf("z = %f",z);
    }
    else
    {
        printf("Warning!!! t>3 or t<0");
    }

    getch();
}
