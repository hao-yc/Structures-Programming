#include <stdio.h>


int main (){
	
	double n,n_media,suma;
	double n_baja=10;
	double n_alt=10;
	int cont=0;	
	int n_apro=0;
	int n_sus=0;
	
	printf("Introduzca una secuencia de notas finalizada con un valor negativo:");
	scanf("%lf%*c", &n);
	
	do {	
		
		suma=suma+n;
		cont++;
			
		if (n>=5) n_apro++;
			
		if (n<n_baja)
		n_baja=n;
		
		if (n>n_alt)
		n_alt=n;
	
	
	
	scanf("%lf%*c", &n);
	
	
	}while (n>0) ;
	
	
	n_media = (suma/cont);
	n_sus = cont-n_apro;
	
	printf("Nota media: %.2f\n",n_media);    
	printf("Nota mas ata: %.2f\n",n_alt);  
	printf("Nota mas baja: %.2f\n",n_baja);
	printf("Numero de aprovados: %d\n", n_apro);
	printf("Numero de suspendidos: %d\n ", n_sus);




}
