 #include <stdio.h>
 #include <conio.h>
 #include <math.h>

 void main()
{

    float x;
    printf("Enter x: \n");
    scanf("%f",&x);

    float y;
    float a = 2.7;
    float b = 1.7;


    y = pow( a, 2 )/(x + 2) * exp( -b * x ) + log(a + b * x);

    printf("y = %f",y);

    getche();
}
