#include <stdio.h>

int suma_digitos (int num);

int main ()
{ 
	int x;
	
	printf ("\nIntroduza una secuencia de numeros acabada en -1:\n");
	scanf ("%d%*c", &x);
	while (x!=-1)
	{
     printf("La suma de los dígitos de %d es %d\n",x,suma_digitos(x)); 
     scanf ("%d%*c", &x); 
	}
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
