 #include <stdio.h>
 #include <conio.h>
 #include <locale.h>
 void main ()
 {
 	setlocale(LC_ALL, "RUS");
 	int k,hour,min,sec;
 	printf ("������� k ������ \n");
 	scanf ("%d",&k);
 	hour=k/3600;
 	min=(k-h*3600)/60;
 	sec=k-h*3600-min*60;
 	printf("����: %d \n",h);
 	printf("������: %d \n",m);
 	printf("�������: %d \n",s);
 	getche();
 }
