 #include <stdio.h>
 #include <conio.h>
 #include <math.h>

 void main()
{
    float a,b,h;

    printf("Enter a,b and h: ");

    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&h);

    float s = (a + b)*h/2;

    printf("S = %.2f\n",s);

    float v = 1.0/3 * M_PI * h * ( pow((a/2), 2) + a/2 * b/2 + pow((b/2), 2) );

    printf("V = %.2f",v);

    getch();
}
