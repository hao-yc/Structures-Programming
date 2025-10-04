#include <stdio.h>
#define MAX_CAPITALES 6
#define MAX_CAMINO 10
#define TRUE 1
#define FALSE 0

typedef struct{
   int nciudades;   // numero de ciudades que se visitan
   int camino[MAX_CAMINO]; // identificadores de las ciudades que se visitan
} tcamino;

int main()
{

    /* Matriz distancias con la lista de valores iniciales fila a fila */
    int distancias[MAX_CAPITALES][MAX_CAPITALES] = {0, 1720, 456, 1845, 1473,1093,
    1720, 0, 1272, 1965, 2399, 2322,
    456, 1272, 0, 1468, 1280, 1054,
    1845, 1965, 1468, 0, 1130, 1519, 
    1473, 2399, 1280, 1130, 0, 682, 
    1093, 2322, 1054, 1519, 682, 0};
    int v1,v2,i,v1_inicial;
    int distancia=0;
    tcamino cm;

  
  	do {
   	printf("Introduce el numero de ciudades a visitar: ");
   	scanf("%d",&cm.nciudades);
	} while(cm.nciudades<0 || cm.nciudades>MAX_CAMINO );
  	
  	printf("Introduce el identificador de las dos capitales (id1, id2, ...): ");
  	
 	if(cm.nciudades==1){
		scanf("%d",&v1);
		printf("\nLa distancia entre las capitales es: 0\n");
		}
		
	else{	
		do{
			scanf("%d, %d",&v1,&v2);
			}while(v1<0 || v1>MAX_CAPITALES-1 && v2<0 || v2>MAX_CAPITALES-1);
			
			v1_inicial=v1;
	
  		if(cm.nciudades==2){
  		
  			printf("\nLa distancia entre las capitales %d y %d es %d\n",v1,v2,distancias[v1][v2]);
  			}
  		else{	
  		
  			for(i=2;i<=cm.nciudades;i++){
	        
  	       	 distancia=distancia+distancias[v1][v2];
  	       	
  	       	 v1=v2;
  	        	 scanf(",%d",&v2);
  	        		
  	        	if (v2==6) break;
  	        	
  			}
  			
  			printf("\nLa distancia entre las capitales %d y %d es %d\n",v1_inicial,v2,distancia);
		}
	
	}

}	

