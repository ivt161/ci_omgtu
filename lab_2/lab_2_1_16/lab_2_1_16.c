#include <stdio.h>
#include <conio.h>

void main()
{
    float x,y;

    printf("Enter x and y\n");
    scanf("%f%f",&x,&y);

    if(x == 0 && y == 0)
    {
        printf("point belongs to zero");
    }
    else if(x == 0)
    {
        printf("point belongs to the line y");
    }
    else if(y == 0)
    {
        printf("point belongs to the line x");
    }
    else if(x>0 && y>0)
    {
        printf("point belongs I");
    }
    else if(x<0 && y>0)
    {
        printf("point belongs II");
    }
    else if(x<0 && y<0)
    {
        printf("point belongs III");
    }
        else if(x>0 && y<0)
    {
        printf("point belongs IV");
    }


    getch();
}
