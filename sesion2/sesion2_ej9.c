#include <stdio.h>

int main (){

	 char c;
	 char invertida;
	 
	 printf("Introduzca un caracter: ");
	 scanf("%c", &c);
	 
	 invertida = c -('a'-'A');
	 printf(invertida);
	
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){
	 printf("Es una letra\n");
	 	
	 if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'U' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u'){
	    printf("Es una vocal\nno es una consonante\n");
	    	
         } else printf ("no es una vocal\nes una consonante\n");
         
         if (c >= 'a' && c <= 'z'){  
             printf("No es una mayúscula\nEs una minúscula\n");
         	 
         }else printf("Es una mayúscula\nNo es una minúscula\n");
         
         printf("No es un dígito\n");
         
         printf("El caracter con la capitalizacion invertida es \n" );
        
        }
        else
        
         printf("no es una letran\n");
         printf("no es una vocal\n");
         printf("no es una consonante\n");
         printf("No es una mayúscula\n");
         printf("No es una minúscula\n");
         
         printf("Es un digito\n");
         printf("No es un dígito\n");
         
         


}
