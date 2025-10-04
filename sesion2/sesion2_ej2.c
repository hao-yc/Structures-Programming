#include <stdio.h>
#define PI 3.14

int main(){
	float radio, area, perimetro;
	printf ("Introduzca el radio del circulo: ");
	scanf ("%f%*c", &radio);
	
	area= PI*radio*radio;
	perimetro= 2*PI*radio;
	
	printf("Area del circulo: %.2f\n", area);
	printf("Perimetro del circulo: %.2f\n", perimetro);
}
