 #include <stdio.h>
 #include <conio.h>
 #include <math.h>

 void main()
{

    float x;
    printf("Enter x: \n");
    scanf("%f",&x);

    float w;
    float a = 1.5;
    float b = 2;
    float c = -0.7;

    w = a*exp(-sqrt(x))*cos(b*x)+pow(c,5);

    printf("w = %f",w);

    getche();
}

