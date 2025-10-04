#include <stdio.h>
#include "colours.h"

int main (){

	unsigned int n;
	
	printf("Introduzca un numero natural: ");
	scanf("%u%*c",&n);
	
	for (int i =0; i <=n; i++){
	cambiar_color(BLUE);
		for (int j=0; j<i;j++){
			if (i%2==0){
			cambiar_color(GREEN);
			printf("*");
				
			}
			else{
			cambiar_color(YELLOW);
			printf("*");
			}
	}
	printf("\n");

	
	}



}
