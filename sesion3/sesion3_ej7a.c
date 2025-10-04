#include <stdio.h>


int main(){
 	
 	double real;
 	unsigned int natural;
 	double result=1;
 	
 	printf("Introduzca elvalor de x (real): ");
 	scanf("%lf%*c", &real);
 	result=real;
 	printf("Introduzca el valor de n (natural): ");
 	scanf("%u%*c", &natural); 
 	
 	for (int i=1; i<natural;i++){
	
		 result = result*real;
		 
		 }
 	
 	printf("El resultado de 3.10 elevado a 4 es: %lf \n", result);
 	
 
}
