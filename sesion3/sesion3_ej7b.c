#include <stdio.h>


int main(){

	double x;
	unsigned int n;
	double termino=0;
	double cos=0;
	
	double fact,pot;
	int j;
		
	
	
	printf("Introduzca un valor real (x): ");
 	scanf("%lf%*c", &x);
 	
 	
 	
 	printf("Introduzca un valor natural (n): ");
 	scanf("%u%*c", &n); 
	
	
	for (int i=0; i<n;i++){

		printf("i=%d-----------------------\n",i);
			
		pot=1;
		for (j=1;j<=2*i;j++)
		pot = pot*x;
		
		printf("pot=%.2f\n",pot);
		
		fact =1;
		for (j=2;j<=2*i;j++)
		fact =fact*j;
		
		printf("fact=%.2f\n",fact);
		
		termino=(float) pot/fact;
		
		printf("termino=%.2f\n",termino);
		
		if(i%2==0) cos = cos +termino;
		else cos = cos-termino;
	
	
	}

	printf("cos(%.2f) = %.2f \n", x, cos);
}
