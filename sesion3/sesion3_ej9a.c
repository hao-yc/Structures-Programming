#include <stdio.h>
#include "colours.h"

int main (){
	
	unsigned int n;
	int i;
	printf("Introduzca un numero natural: ");
	scanf("%u",&n);
	
	i = 2; 
	while (i<n && n%i != 0) 
	i=i+1;

	if (n==1 || i == n){
	cambiar_color(GREEN);
	printf("El numero %u es primo\n", n);
	}
	
	else{ 
	cambiar_color(RED);
	printf("El numero %u no es primo \n", n);
	}
	
	}
