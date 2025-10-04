/*
    Nombre1: 
    Nombre2: 
*/

#include <stdio.h>
#define MAX_PERSONAS 200
#define MAX_CAR 20

typedef struct
{     
     int num;		/* Numero del DNI */
     char letra;	/* Letra del DNI */
}tdni; 

typedef struct 
{
   char nom[20];	/* Nombre de la persona finalizado en \n */
   tdni dni;		/* DNI de la persona */ 
}tpersona;  

typedef struct
{
   int nper;				/* Numero de personas en el vector */
   tpersona lista[MAX_PERSONAS];	/* Vector de personas */
}tlista_personas; 

void leer_cadena(char cad[MAX_CAR]);
void escribir_cadena(char cad[MAX_CAR]);
tpersona leer_persona ();
void mostrar_persona (tpersona p);
void leer_lista_personas (tlista_personas *lp);
void mostrar_lista_personas (tlista_personas lp);
int insertar_persona (tlista_personas *lp, tpersona p);

int main ()
{ 
    tlista_personas lp={5,{{"Maria Gomez\n",{11111111,'A'}},{"Jose Gonzalez\n", {22222222,'A'}},{"Juan Colas\n", {31111112,'B'}},{"Anna Bardou\n", {32365816,'S'}},{"Felip Sanz\n", {82723746,'A'}}}};

}