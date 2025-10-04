#include <stdio.h>


int main (){

	int n;
	
	printf("Introduzca un numero natural: " );
	scanf("%d", &n);
	
	printf("Secuencia de numeros: ");
	
	for (int i=0; i<n+1;i++){
	       
	       if (i==n){
	       printf("%d",i);
	       }
	       else{	
	       printf("%d, ",i);
		}
	}
         printf("\n");




}
