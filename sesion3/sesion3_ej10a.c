#include <stdio.h>
#include "colours.h"

int main (){

	unsigned int n;
	
	printf("Introduzca un numero natural: ");
	scanf("%u%*c",&n);
	
	for (int i =0; i <=n; i++){
	
		for (int j=0; j< i;j++){
		printf("*");
		}
		printf("\n");
	}



}
