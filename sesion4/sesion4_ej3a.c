#include <stdio.h>

typedef struct
{
unsigned int hh; /* Horas */
unsigned int mm; /* Minutos */
unsigned int ss; /* Segundos */
}texpr_horaria;

int main(){ 
	
	unsigned int segundos;
	texpr_horaria p;
	
	printf("Expresion horaria (hh mm ss): ");
	scanf("(%u %u %u)%*c",&p.hh,&p.mm,&p.ss );
	
	segundos = p.ss + p.mm*60 + p.hh*3600;
	
	printf("Segundos: %u\n", segundos);

}
