 #include <stdio.h>
 #include <conio.h>
 #include <locale.h>
 void main ()
 {
 	setlocale(LC_ALL, "RUS");
 	int k,hour,min,sec;
 	printf ("Ââåäèòå k ñåêóíä \n");
 	scanf ("%d",&k);
 	hour=k/3600;
 	min=(k-h*3600)/60;
 	sec=k-h*3600-min*60;
 	printf("Hours: %d \n",h);
 	printf("Minutes: %d \n",m);
 	printf("Seconds: %d \n",s);
 	getche();
 }
