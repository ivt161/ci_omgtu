 #include <stdio.h>
 #include <conio.h>
 #include <math.h>

 void main()
{

    float x;
    printf("Enter x: \n");
    scanf("%f",&x);

    float z;
    float a = 0.5;
    float b = 1.3;


    z = exp(-a * x) * (x + pow((x + a), 1.0/4) )/(x + sqrt(x - b));

    printf("z = %f",z);

    getche();
}
