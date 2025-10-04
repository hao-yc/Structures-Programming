#include <stdio.h>
#define N 10

typedef struct
{
   int fils, cols;  // numero de filas y columnas de la matriz (1<=fil,col<=N)
   unsigned int mat[N][N];   // elementos de la matriz de naturales
}tmatriz;

int main()
{
    tmatriz m1={3,3,{{1,2,3},{2,1,4},{3,4,1}}};
//    tmatriz m1={3,3,{{1,2,2},{2,1,4},{3,4,1}}};
//    tmatriz m1={3,4,{{1,2,3,0},{2,1,4,0},{3,4,1,0}}};
    int i,j;

    printf("Datos de la matriz m1:\n");
    for (i=0; i<m1.fils; i++)
    {
        for (j=0; j<m1.cols; j++)
          printf("%3u ", m1.mat[i][j]);
        printf("\n");
    }

    /* Complete el programa */

}

