#include <stdio.h>

int main (){
	
	unsigned int n;
	int i;
	int cont =0;
	printf("Introduzca una secuencia de numeros naturales y finalice con -1: ");
	scanf("%d%*c", &n); 
	do{
	
	i = 2; 
	while (i<n && n%i != 0) 
	i=i+1;
	
	
	if (n==1 || i == n){
		printf("El numero %u es primo\n", n);
		cont++;
		
	}	
	scanf("%u%*c", &n);

	}while (n!=-1);
	 
	if (cont ==0)
	printf ("No hay numeros primos en la secuencia \n");
}
