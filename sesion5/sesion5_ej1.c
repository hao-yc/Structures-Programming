#include <stdio.h>
#define MAX 200

typedef struct{
	int dia; 
	int mes;
	int anyo;
}tfecha;

int main(){
	int i=0;
	printf("Valor de frase:\n");
	char frase[200]="Esto es una frase.";
	float v1[20]={[0 ... 19]=1};
	tfecha vf[5]={{1, 1, 1945},{7, 7, 1999},{12,4,2000}, {16,10,1989}, {8,3,2012}};
	
	
	do{
		printf("%c", frase[i]);
		i++;
	}while (frase[i]!='.');
	printf("%c\n",frase[i]);
	
	printf("\n");
	
	printf("Valor de v1\n");
	for (i=0;i<10;i++)
		printf("%.1f, ", v1[i]);
		
	printf("\n\n");
	
	
	printf("Valor de vfechas:\n");
	for (i=0;i<5;i++)
		printf("%d/%d/%d ", vf[i].dia,vf[i].mes,vf[i].anyo);

	printf("\n\n");

}
