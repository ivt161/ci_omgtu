 #include <stdio.h>
 #include <conio.h>
 #include <math.h>

 void main()
{

    float x;
    printf("Enter x: \n");
    scanf("%f",&x);

    float y;
    float a = 0.5;
    float b = 2;
    float c = 1.5;

    y = b * pow(x,2) * exp(a * pow(x,2)) + a * sqrt(x + 1.5);

    printf("y = %f",y);

    getche();
}
