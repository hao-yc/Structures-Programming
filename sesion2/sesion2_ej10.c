#include <stdio.h>


#define PI 3.1415

int main (){

	char desc;
	float base, altura, area, radio;
	printf("Introduzca la descripcion de la figura: ");
	scanf("%c ", &desc);
	if (desc == 't' || desc == 'T')
	{
    	scanf("%f %f%*c", &base, &altura);
    	area = base*altura/2;
    	printf("\nArea del triangulo = %f\n", area);
    	}
    	else if (desc == 'c' || desc == 'C'){
    	
    	scanf("%f%*c" ,&radio);
    	area= PI*radio*radio; 	
    	
    	printf ("\nArea del circulo = %f\n",area);
        }
        
        else 
        printf("El tipo de la figura es incorrecto\n"); 
      
    	
	
	
	




}
