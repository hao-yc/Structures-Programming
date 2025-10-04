#include <stdio.h>


int main(){

	char c1,c2;
	int cont=0;
	printf("Introduzca una frase acabada en punto: ");
	scanf("%c%c%*c",&c1,&c2);
	
	while (c2!='.'){
	
		if (c1 != ' ' && c2 == ' ') {
		cont=cont+1;
		
		}
	c1=c2;
			
	scanf("%c",&c2);
	
	
	}
	
	
	cont++;

 	printf("Numero de palabras: %d\n", cont);

}
