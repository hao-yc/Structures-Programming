#include <stdio.h>
#include "colours.h"

int main (){

	unsigned int n;
	
	printf("Introduzca un numero natural: ");
	scanf("%u%*c",&n);
	
	for (int i=n; i>=1; i--){
	
		for (int j=0; j<i;j++){
		cambiar_color(GREEN);
			if(j%2!=0) 
			cambiar_color(YELLOW);
		printf("*");	
			}
	printf("\n");		
	}
	

	
	}



	
