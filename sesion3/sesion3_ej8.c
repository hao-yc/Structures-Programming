#include <stdio.h>
#include "colours.h"


int main(){
	
	int opcion;
	
	int n=0;
	int i =0;	
	char c1,c2;
	int cont=0;
	float e;
	double termino=0;
	double x;
	int n1=0;
			
			
			double cos=0;
	int fact;
			double pot;
			int j;
	
	do
	{
	cambiar_color(GREEN);
	printf ("1. Mostrar divisores (ejercicio 4) \n");
	printf ("2. Calcular numero e (ejercicio 5) \n");	
	printf ("3. Contar palabras de una frase (ejercicio 6)\n");
	printf("4. Calcular coseno (ejercicio 7)\n");
	printf("5. Salir \n");	
	
	printf("Escoja opcion: ");
	cambiar_color(DEFAULT);
	scanf("%d%*c", &opcion);  		
	switch (opcion)
	{
		case 1:
		
			printf("Introduzca un numero natural: " );
			scanf("%d",&n); 
	
			printf("Los divisores de %d son: ", n);
			for (i=1;i<=n;i++){
				if (n%i == 0){
			        printf("%d, ", i);}
	 		}
			printf("\n");
			break;
		case 2:
	
	
			printf("Introduzca el valor de n: ");
			scanf("%d",&n1);
			
		
			for (int i=0;i<=n1;i++){	
				int fact =1;
				for (int j=1;j<=i;j++){
				fact = fact*j;
				}
				e =e + (float)1/fact;
				
			   	           	
				}
				
			printf("Numero e = %f\n",e);
			
			
			break;
		case 3:
		
		
			printf("Introduzca una frase acabada en punto: ");
			scanf("%c%c%*c",&c1,&c2);
	
			while (c2!='.'){
				if (c1 != ' ' && c2 == ' ') {
				cont=cont+1;
				}
				c1=c2;	
				scanf("%c",&c2);
				}
			
			printf("Numero de palabras: %d\n", cont);
			
			break;
		case 4:
		
		
			printf("Introduzca un valor real (x): ");
 			scanf("%lf%*c", &x);
 	
 			printf("Introduzca un valor natural (n): ");
 			scanf("%u%*c", &n); 
	
	
			for (int i=0; i<n;i++){

			
				pot=1;
				for (j=1;j<=2*i;j++)
				pot = pot*x;
		
		
				fact =1;
				for (j=2;j<=2*i;j++)
				fact =fact*j;
							
				termino=(float) pot/fact;
	
		
				if(i%2==0) cos = cos +termino;
				else cos = cos-termino;
				}
				printf("cos(%.2f) = %.2f \n", x, cos);
			break;
		case 5: 
			break;
			
		default:
		    cambiar_color(RED);
		    printf("Opcion Incorrecta\n");
		    }
	
	} while (opcion!=5);




}
