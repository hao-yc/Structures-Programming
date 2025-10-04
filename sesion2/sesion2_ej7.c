#include <stdio.h>

int main(){
	 
	 int totalsegundos,h,m,s;
	 
	 printf("Introduzca la cantidad en segundos: ");
	 scanf("%d", &totalsegundos);
	 
	 h = totalsegundos/3600;
	 m = (totalsegundos%3600)/60;
	 s = totalsegundos%60;
	 
	 printf ("%dh %dm %ds\n", h, m,s);
	 
 





}
