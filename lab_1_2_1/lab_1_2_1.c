 #include <stdio.h>
 #include <conio.h>
 #include <locale.h>
 void main ()
 {
 	setlocale(LC_ALL, "RUS");
 	int k,hour,min,sec;
 	printf ("Введите k секунд \n");
 	scanf ("%d",&k);
 	hour=k/3600;
 	min=(k-h*3600)/60;
 	sec=k-h*3600-min*60;
 	printf("Часы: %d \n",h);
 	printf("Минуты: %d \n",m);
 	printf("Секунды: %d \n",s);
 	getche();
 }
