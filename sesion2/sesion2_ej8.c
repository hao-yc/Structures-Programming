#include <stdio.h>



int main (){


	 int totalsegundos, h,m,s;
	 
	 printf("Introduzca una hora en formato hh:mm:ss : ");
	 scanf("%d:%d:%d", &h,&m,&s);
	 
	 totalsegundos = (h*3600+m*60+s);
	 
	 totalsegundos =totalsegundos+1;
	 
	 h = totalsegundos/3600;
	 m = (totalsegundos%3600)/60;
	 s = totalsegundos%60;
	 
	 
	 printf ("%d:%d:%d\n", h, m,s);
	 
	 
	 
	 }
