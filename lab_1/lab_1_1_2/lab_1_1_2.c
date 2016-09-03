 #include <stdio.h>
 #include <conio.h>
 #include <math.h>

 void main()
{

    float x;
    printf("Enter x: \n");
    scanf("%f",&x);

    float y;
    float a = 0.7;
    float c = 2.1;

    y = sin(x) / sqrt(1 + pow(a,2)* pow(sin(x), 2))- c*log(a*x);

    printf("y = %f",y);

    getche();
}

