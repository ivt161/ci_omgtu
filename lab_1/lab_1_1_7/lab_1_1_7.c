 #include <stdio.h>
 #include <conio.h>
 #include <math.h>

 void main()
{

    float x;
    printf("Enter x: \n");
    scanf("%f",&x);

    float w;
    float a = 0.5;
    float b = 1;


    w = exp( -pow(a,2) ) * sqrt(x+1) + exp( b * x ) * pow( (x+1), 1.0/3 );

    printf("w = %f",w);

    getche();
}
