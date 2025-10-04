#include <stdio.h>


int main(){

	int n;
	int i =0;
	printf("Introduzca un numero natural: " );
	scanf("%d",&n); 
	
	printf("Los divisores de %d son: ", n);

	for (i=1;i<=n-1;i++){
		if (n%i == 0){
			printf("%d, ", i);
			
	        }
	 }
	 
	 printf("%d\n", i);
	        
	        
	
	
	
	
	

}
