#include <stdio.h>



int main(){

	char frase[100];
	int i=0;
	char c;
	printf("Introduzca una frase acabada en punto (<=100 caracteres):\n");
	
	scanf("%c", &frase[i]);
	while (frase[i]!='.')
	{
	    i++;
	    scanf("%c", &frase[i]);
	}
	scanf("%*c"); //para descartar el \n

	printf("Frase codificada:\n");	
	
	for (i = 0; frase[i] != '.'; i++) {
	   	
		if (frase[i]>='A' && frase[i]<='Z')
	    		c = 'A'+(frase[i]-'A'+4)%('Z'-'A'+1);
	    	
	    	else if (frase[i]>='a' && frase[i]<='z')
	    		c = 'a'+(frase[i]-'a'+4)%('z'-'a'+1);
	    	
	    	else if (frase[i]>='0' && frase[i]<='9')
	    		c = '0'+(frase[i]-'0'+4)%('9'-'0'+1);
	    	else c=frase[i];    		 	
	   	
	   	printf("%c",c); //imprimir carácter codificado
	} 
	printf("\n");	

}
