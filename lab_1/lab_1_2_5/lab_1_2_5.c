#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{

    float x1,x2,x3,y1,y2,y3; //Координаты точек

    printf("Enter coordinates first side \n");
    scanf("%f%f",&x1,&y1);

    printf("Enter coordinates second side \n");
    scanf("%f%f",&x2,&y2);

    printf("Enter coordinates third side \n");
    scanf("%f%f",&x3,&y3);

    //Вычисляем длины сторон
    float a,b,c; //Стороны

    a = sqrt( pow((x2 - x1),2) + pow((y2 - y1),2));
    b = sqrt( pow((x3 - x2),2) + pow((y3 - y2),2));
    c = sqrt( pow((x3 - x1),2) + pow((y3 - y1),2));

    //Вычисляем длины медиан

    float med1, med2, med3;

    med1 = sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2));
    med2 = sqrt(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2));
    med3 = sqrt(2 * pow(c, 2) + 2 * pow(b, 2) - pow(a, 2));

    printf("med1 = %.2f, med2 = %.2f, med3 = %.2f",med1,med2,med3);

    getch();

}
