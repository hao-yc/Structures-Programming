#include <stdio.h>

int suma_digitos (int num);

int main ()
{ 
	int n;
 	printf("Introduzca un valor natural: ");
 	scanf("%d",&n);
 	printf("La suma de los digitos de %d es %d\n",n,º	;
}


int suma_digitos (int num)
{ 
 int aux,suma=0;
 	while(num>0){
 	
 	aux=num;
 	num=num%10;
 	suma+=num;
 	num=aux/10;
 	
	}
//num=suma;
return suma;

}
