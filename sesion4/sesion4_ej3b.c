#include <stdio.h>

typedef struct
{
unsigned int hh; /* Horas */
unsigned int mm; /* Minutos */
unsigned int ss; /* Segundos */
}texpr_horaria;

int main(){ 
	int dh1,dh2;
	unsigned int seg1,seg2;
	texpr_horaria p,p2;
	
	printf("Introduzca primera expresion horaria  (hh mm ss): ");
	scanf("(%u %u %u)%*c",&p.hh,&p.mm,&p.ss );
	
	printf("Introduzca segunda expresion horaria(hh mm ss): ");
	scanf("(%u %u %u)%*c",&p2.hh,&p2.mm,&p2.ss );
	
	seg1 = p.ss + p.mm*60 + p.hh*3600;
	seg2 = p2.ss + p2.mm*60 + p2.hh*3600;
	
	
	if (seg1 < 12*3600) 
    		dh1 = seg1;
	else 
    		dh1 = 24*3600 - seg1;
    		
    	if (seg2 < 12*3600) 
    		dh2 = seg2;
	else 
    		dh2 = 24*3600 - seg2;
    		
    		
    	
	if (dh1 < dh2)
	
	printf("La expresion horaria mas cercana a la medianoche es: (%02u %02u %02u)\n",p.hh,p.mm,p.ss);
	
	else
	
	printf("La expresion horaria mas cercana a la medianoche es: (%02u %02u %02u)\n",p2.hh,p2.mm,p2.ss );
	

}
