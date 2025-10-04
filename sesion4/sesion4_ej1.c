#include <stdio.h>
#define ERROR 0.001

typedef struct 
{
    float prof, largo, ancho_pis;
    float ph, volumen, temperatura;
    int num_carriles;
    float ancho_carril;
    char uso; 
} tpiscina;


int main(){
	
	tpiscina p={2.5, 50.0, 21.0, 6.5, 2506.0, 26.5, 8, 250.0, 'N'};

	float volumen_teorico, ancho_teorico;
	ancho_teorico = p.num_carriles*p.ancho_carril/100;


	if ((p.ancho_pis < ancho_teorico-ERROR) || (p.ancho_pis > ancho_teorico+ERROR)){
		printf("Ancho de la piscina no es correcto: inicial = %.1f calculado = %.1f\n\n", p.ancho_pis, ancho_teorico);
		printf("Se ha modificado el ancho de la piscina\n\n");
		}		
	if((p.volumen < volumen_teorico-ERROR) || (p.volumen > volumen_teorico+ERROR)){
		printf("Volumen de la piscina no es correcto: inicial = %.1f calculado = %.1f\n\n", p.volumen, volumen_teorico);
		printf("Se ha modificado el ancho de la piscina\n\n");
		}
	printf("\n");
	printf("********************* Caracteristicas de la piscina **********************\n");
	printf("Profundidad = %.1f\tLargo = %.1f\t\t\tAncho = %.1f\n", p.prof, p.largo, p.ancho_pis);
	printf("PH = %.1f\t\tVolumen = %.1f\t\tTemperatura = %.1f\n", p.ph, p.volumen, p.temperatura);
	printf("Carriles = %d\t\tAncho del carril = %.1f\tUso deportivo = %c\n", p.num_carriles, p.ancho_carril, p.uso);
	printf("**************************************************************************\n");
	


}
