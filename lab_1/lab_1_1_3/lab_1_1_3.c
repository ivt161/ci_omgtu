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
    float b = 1.2;
    float c = 1;

    z = sqrt(a + b - exp(sin(x)) + c );

    printf("z = %f",z);

    getche();
}

