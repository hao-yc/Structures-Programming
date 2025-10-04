#include <stdio.h>
#define MAX_CAPITALES 6

int main()
{
    /* Matriz distancias con la lista de valores iniciales fila a fila */
    int distancias[MAX_CAPITALES][MAX_CAPITALES] = {0, 1720, 456, 1845, 1473,1093,
     1720, 0, 1272, 1965, 2399, 2322,
     456, 1272, 0, 1468, 1280, 1054,
     1845, 1965, 1468, 0, 1130, 1519, 
     1473, 2399, 1280, 1130, 0, 682,
     1093, 2322, 1054, 1519, 682, 0};
	int v1,v2;
	do{
	printf("Introduce el identificador de las dos capitales (id1, id2): ");
	scanf("%d, %d",&v1,&v2);
	}while(v1<0 || v1>MAX_CAPITALES-1 && v2<0 || v2>MAX_CAPITALES-1);
	
	
	
	printf("\nLa distancia entre las capitales %d y %d es %d\n",v1,v2,distancias[v1][v2]);



}





