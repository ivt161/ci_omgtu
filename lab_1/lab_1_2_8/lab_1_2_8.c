#include <stdio.h>
#include <math.h>
#include <conio.h>

void main()
{

    int second, minute, hour;

    printf("Enter second, minute and hour: \n");

    scanf("%d", &second);
    scanf("%d", &minute);
    scanf("%d", &hour);

    second = second + minute * 60 + hour * 3600;
//Вычисляем угол
    float alpha;

    alpha = 360.0 / (12 * 3600) * second;

    printf("second = %d, alpha = %.2f", second, alpha);

    getch();

}
