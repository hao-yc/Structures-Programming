#include <stdio.h>


int main(){

	int n;
	int suma =0;
	
	printf("Introduzca una secuencia de numeros naturales y finalice con -1: " );
	
	scanf("%d%*c", &n); 
	while (n!=-1)
	{	
    	suma = suma+n;
    	scanf("%d%*c", &n);
	}  
    
	printf("suma: %d\n",suma);   
	
	}
