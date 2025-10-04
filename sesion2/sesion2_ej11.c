#include <stdio.h>


int main (){

	int anyos;
	printf("Introduzca un anyo: ");
	scanf("%d", &anyos);
	
	if (anyos%4==0 && anyos%4!=0 || anyos%400==0 ){
	
		printf ("el anyo %d", anyos);
		printf (" es bisiesto\n");
	} 
	else{ 
	printf ("el anyo %d", anyos);
	printf(" no es bisiesto\n");
	}




}
