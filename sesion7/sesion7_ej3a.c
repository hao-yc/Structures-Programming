#include <stdio.h>






int menu();
float potencia(float b, unsigned e);
unsigned long factorial(unsigned num);
unsigned long combinatorio(unsigned m, unsigned n);



int main(){
	int opc;
	unsigned int n,m;
	float x, res;
	unsigned long f,c;
	
	
	opc=menu();
	switch(opc){
			case 1:
				printf("\nHa introducido la opcion calcular potencia\n");
				printf("\nIntroduce el valor de x (real): ");
				scanf("%f*c",&x);
				printf("\nIntroduce el valor de n (natural): ");
				scanf("%u%*c",&n);
				res=potencia(x,n);
				printf("\n%.2f elevado a %u es igual a %.2f\n",x,n,res);
				break;
				
				
			case 2:
				printf("\nHa escogido la opcion calcular factorial\n");
				printf("\nIntroduzca un numero entero positivo: ");
				scanf("%u%*c",&n);
				f=factorial(n);
				printf("\nFactorial de %d es: %lu\n",n,f);
				break;
				
			case 3:
				printf("\nHa escogido la opcion calcular numero combinatorio\n");
				printf("\nIntroduzca numero combinatorio (m n): ");
				scanf("(%u %u)",&n,&m);
				f=combinatorio(n,m);
				printf("\nCombinatorio de %u %u es: %lu\n",n,m,f); 
				break;
				
			case 4:
				printf("\nHa escogido la opcion salir\n");
				break;
			
	}
}

int menu(){
	int opcion;
	do{
	
		printf("********** MENU **********\n");
		printf("1. Calcular potencia\n");
		printf("2. Calcular factorial\n");
		printf("3. Calcular numero combinatorio\n");
		printf("4. Salir\n");
		printf("Escoja una opcion: ");
		scanf("%d%*c",&opcion);
		if(opcion>4|| opcion<1)
			printf("\nHa escogido una opcion incorrecta. Vuelva a intentarlo!\n\n");
	}while(opcion>4 || opcion<1);
}


float potencia(float b, unsigned e){
	float res=1;
	int i;
	for (i=1;i<=e;i++)
		res=res*b;
	return res;
	
}

unsigned long factorial(unsigned num){
	unsigned long res=1;
	int i;
	for (i=1;i<=num;i++)
	res=res*i;
	return res;

}

unsigned long combinatorio(unsigned m, unsigned n){
	unsigned long comb;
	comb= factorial(m)/(factorial(n)*factorial(m-n));
	return comb;	
}
