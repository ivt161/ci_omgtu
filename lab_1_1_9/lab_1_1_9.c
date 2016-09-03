 #include <stdio.h>
 #include <conio.h>
 #include <math.h>

 void main()
{

    float x;
    printf("Enter x: \n");
    scanf("%f",&x);

    float z;
    float a = 2;
    float b = 0.7;
    float c = 0.5;


    z = pow( a, 3 ) * cos( b * x * pow( sin(x), 2) ) + pow(c, 1.0/3);

    printf("z = %f",z);

    getche();
}
