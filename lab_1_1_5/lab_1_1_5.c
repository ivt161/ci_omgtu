 #include <stdio.h>
 #include <conio.h>
 #include <locale.h>
 #include <math.h>

 void main()
{

    double y;
    double a = 0.5;
    double b = 2;
    double c = 1.5;
    /*

    !!!!Внимание!!!!

    */
    //Изменяем х в зависимости от задачи. Нужное раскомментировать!

    //double x = 1;
    //double x = 2;


    y = b * pow(x,2) * exp(a * pow(x,2)) + a * sqrt(x + 1.5);

    printf("w = %f",y);

    getche();
}
