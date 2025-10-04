#include <stdio.h>

typedef struct
{
unsigned char R; /* Componente rojo */
unsigned char G; /* Componente verde */
unsigned char B; /* Componente azul */
unsigned char A; /* Transparencia */
}tpixel;

int main(){

	tpixel p1, p2, pp; 
	printf ("Introduzca primer pixel (R,G,B,A): ");
	scanf ("(%hhu,%hhu,%hhu,%hhu)%*c", &p1.R, &p1.G, &p1.B, &p1.A);
	
	printf ("Introduzca segundo pixel (R,G,B,A): ");
	scanf ("(%hhu,%hhu,%hhu,%hhu)%*c", &p2.R, &p2.G, &p2.B, &p2.A);
	
	
	pp.R =  (p1.R + p2.R)/2 + (p1.R + p2.R)%2;  
	pp.G =  (p1.G + p2.G)/2 + (p1.G + p2.G)%2;  
	pp.B =  (p1.B + p2.B)/2 + (p1.B + p2.B)%2;  
	pp.A =  (p1.A + p2.A)/2 + (p1.A + p2.A)%2;  
	
	printf("El valor del pixel medio es: (%hhu,%hhu,%hhu,%hhu)\n",pp.R, pp.G, pp.B, pp.A);



}
