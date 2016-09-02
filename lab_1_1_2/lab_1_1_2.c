 #include <stdio.h>
 #include <conio.h>
 #include <math.h>

 void main()
{

    double y;
    double a = 0.7;
    double c = 2.1;
    /*

    !!!!Внимание!!!!

    */
    //Изменяем х в зависимости от задачи. Нужное раскомментировать!

   //double x = 1;
   // double x = 2;


    y = sin(x) / sqrt(1 + pow(a,2)* pow(sin(x), 2))- c*log(a*x);

    printf("w = %f",y);

    getche();
}
