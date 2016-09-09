#include <stdio.h>
#include <conio.h>
#include <math.h>

int validTriangle(float a, float b, float c)
{
    int result;
    result = ((a+b)>c) ? 1 : 0;

    return result;
}

void main()
{
    float a, b, c, p, s;

    printf("Enter a,b,c: \n");
    scanf("%f%f%f",&a,&b,&c);

    if(validTriangle(a,b,c) && validTriangle(a,c,b) && validTriangle(c,b,a)){

        p = (a+b+c)/2;

        s = sqrt(p * (p - a) * (p - b) * (p - c));

    }
    else{
        printf("It is not triangle");
        goto end;
    }

    printf("s = %4.3f",s);

    end:;

    getch();

}
