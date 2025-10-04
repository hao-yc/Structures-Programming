#include <stdio.h>
 
int main(){

	char ini1,ini2,ini3;
	int valor,mes, edad;	
	
	printf("Introduce tus tres iniciales: ");
	scanf("%c%c%c%*c",&ini1,&ini2, &ini3);
	
	printf ("\nHola %c%c%c\n", ini1, ini2, ini3);
	printf ("¿Sabias que los ordenadores tambien sabemos hacer magia? \n");
	
	printf("Voy a adivinar tu edad. Ya lo veras. Pulsa la tecla <enter>");
	scanf("%*c");
	
	printf("cuando estes preparado.\nEsperando.....\n\n");
	printf("-PIENSA EN EL NUMERO DEL MES EN QUE NACISTE y pulsa <enter>");
	scanf("%*c");
	printf("-MULTIPLICALO POR 4 y pulsa <enter>");
	scanf("%*c");
	printf("-SUMALE 5 y pulsa <enter>");
	scanf("%*c");
	printf("-MULTIPLICALO POR 50 y pulsa <enter>");
	scanf("%*c");
	printf("-SUMALE 1753 y pulsa <enter>");
	scanf("%*c");
	printf("-RESTALE TU ANYO DE NACIMIENTO y pulsa <enter>");
	scanf("%*c");
	printf("-SUMALE 10 y pulsa <enter>");
	scanf("%*c");
	printf("Cuanto te ha dado? ");
	scanf("%d%*c", &valor);
	
	printf("Hmmmmm.......pulsa <enter> para saber si lo adivino\n");
	scanf("%*c");
	
	mes = (valor/100)/2;
	edad = valor%100 +2;

	
	printf("Naciste el mes %d", mes);
	printf(" y este anyo has cumplido o cumpliras %d años\n", edad);
	
	
	
	
	
	
	



}
