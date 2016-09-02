 #include <stdio.h>
 #include <conio.h>
 #include <math.h>

 void main()
{

    float x;
    printf("Enter x: \n");
    scanf("%f",&x);

    float w;
    float a = 4.1;
    float b = -2.3;

    w = (pow(x,3) + pow(a,2)*cos(2*x))/(x + sqrt(a + b*sin(3*x)));

    printf("w = %f",w);

    getche();
}

