#include <stdio.h>
#include "colours.h"	
#include "azar.h"	

int main()
{
	unsigned int val;
	unsigned int c_raton=29;
	unsigned int c_gato=0;
	int num,num2;
  
        inicializar_azar();		
	
	do{
	num=numero_al_azar(6);
	c_raton = c_raton+num;
	
	num2=numero_al_azar(6);
	c_gato= c_gato+(num2*2);
	
	if (c_raton>=60) c_raton=60;
	if (c_gato>=c_raton) c_gato=c_raton;
	
	cambiar_color(GREEN);
 	printf ("Raton: He sacado un %d. Voy a la casilla %u\n",num,c_raton); 
 	cambiar_color(RED);
 	printf ("Gato: He sacado un %d. Voy a la casilla %u\n",num2,c_gato); 
	
	if (c_gato>c_raton || c_gato == c_raton) break;
	if(c_raton>=60) break;
	
	}while(c_gato<=59 || c_raton<=59);
	
	 
	 if (c_gato>=c_raton){
	 	cambiar_color(RED);
	 	printf("Gato: He ganado!!!!\n");	
	 
	 }
	 else {
	 	cambiar_color(GREEN);
	 	printf("Raton: He ganado!!!!\n");	
	 
	 }
	 
}
