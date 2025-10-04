#include <stdio.h>


int main(){

	int n=0;
	float e;
	double termino;
	
	
	printf("Introduzca el valor de n: ");
	scanf("%d",&n);
	
	
	for (int i=0;i<=n;i++){
		int fact =1;
		for (int j=1;j<=i;j++){
		fact = fact*j;
		}
	        termino= (float)1/fact;
		e =e + termino;
	   	           	
	        }
		
	printf("Numero e = %f\n",e);
	}
