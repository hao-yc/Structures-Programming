#include <stdio.h>
#include "colores.h"

int main (){
	
	int valor;
	
	printf ("Introduzca un valor entero entre 0 y 9: ");
	scanf("%d", &valor);
	if (9>=valor && valor >=0){
		switch(valor){
			case 0:
				printf("Ha introducido el ");
				cambiar_color(GREEN);
				printf("CERO\n");
				break;
			case 1: 
				printf("Ha introducido el ");
				cambiar_color(MAGENTA);
				printf("UNO\n");
				break;
			case 2:
				printf("Ha introducido el ");
				cambiar_color(GREEN);
				printf("DOS\n");
				break;
			case 3:
				printf("Ha introducido el ");
				cambiar_color(MAGENTA);
				printf("TRES\n");
				break;
			case 4:
				printf("Ha introducido el ");
				cambiar_color(GREEN);
				printf("CUATRO\n");
				break;
			case 5:
				printf("Ha introducido el ");
				cambiar_color(MAGENTA);
				printf("CINCO\n");
				break;
			case 6:
				printf("Ha introducido el ");
				cambiar_color(GREEN);
				printf("SEIS\n");
				break;
			case 7:
				printf("Ha introducido el ");
				cambiar_color(MAGENTA);
				printf("SIETE\n");
				break;
			case 8:
				printf("Ha introducido el ");
				cambiar_color(GREEN);
				printf("OCHO\n");
				break;
			case 9:
				printf("Ha introducido el ");
				cambiar_color(MAGENTA);
				printf("NUEVE\n");
				break;
				
			}
			}
		
	else {
	 printf("El numero introducido es dificil de escribir\n");
	}


}
