#include <stdio.h>


int main(){

	unsigned long m=0;
	
	int fact =1;
	printf("Introduzca el valor de m: ");
	scanf("%ld",&m);
	
	for (int i=2; i<=m;i++){
	
		 fact = fact*i;
	
	}
	
	printf("%ld! = ", m);	
	printf("%d\n",fact);
	}
