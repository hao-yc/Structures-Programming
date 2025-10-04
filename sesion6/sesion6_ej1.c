#include <stdio.h>
#define VACIA -1
#define N 10



typedef struct {
   int num, den;   // numerador y denominador
}tfracciones;

int main()
{
	// Aqui van las declaraciones de las variables m1, sudoku y mat_frac
    	
    	int m1[5][4]={
    			{1, 1, 1, 1},
    			{1, 1, 1, 1},
    			{1, 1, 1, 1},
    			{1, 1, 1, 1},
    			{1, 1, 1, 1}
    			};
    	int i,j;
	int sudoku[9][9]={
	{5,3,VACIA,VACIA,7,VACIA,VACIA,VACIA,VACIA},
	{6,VACIA,VACIA,1,9,5,VACIA,VACIA,VACIA},
	{VACIA,9,8,VACIA,VACIA,VACIA,VACIA,6,VACIA},
	{8,VACIA,VACIA,VACIA,6,VACIA,VACIA,VACIA,3},
	{4,VACIA,VACIA,8,VACIA,3,VACIA,VACIA,1},
	{7,VACIA,VACIA,VACIA,2,VACIA,VACIA,VACIA,6},
	{VACIA,6,VACIA,VACIA,VACIA,VACIA,2,8,VACIA},
	{VACIA,VACIA,VACIA,4,1,9,VACIA,VACIA,5},
	{VACIA,VACIA,VACIA,VACIA,8,VACIA,VACIA,7,9}};
	
	tfracciones mat_frac[N][N];
	
	printf("Valor de m1:\n");
	
	for (i=0; i<5; i++){
  	  for (j=0; j<4; j++){
	printf("%2d ",m1[i][j]);
	}
	printf("\n");
	}
    	
  	printf("\nValor de sudoku:\n"); 
  	
 
  	
  	for (i=0; i<9; i++){
  	  for (j=0; j<9; j++){
  	  	if(sudoku[i][j]==VACIA)
  	  	printf("  ");
  	  	else
		printf("%2d",sudoku[i][j]);
	}
	printf("\n");
	}
    
    	
    	printf("\nValor de mat_frac:\n");
    	
    	for(i=0;i<10;i++){
    		for(j=0;j<10;j++){
    	 	mat_frac[i][j].num=(i+1);
    	 	mat_frac[i][j].den=(j+1);
    	 	printf("%2d/%2d ",mat_frac[i][j].num, mat_frac[i][j].den);
    	}
    	printf("\n");
    }
    	
    	
    
}

