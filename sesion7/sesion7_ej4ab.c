#include <stdio.h>

typedef struct {
  	int num;   /* Numerador */
  	int den;   /* Denominador */
} t_fraccion;

t_fraccion leer_fraccion();
void mostrar_fraccion(t_fraccion f);

int main()
{
  
   t_fraccion f1;
   f1=leer_fraccion();
   mostrar_fraccion(f1);
   
}

t_fraccion leer_fraccion()
{	
  t_fraccion t;
  printf("Fraccion (formato x/y): ");
  scanf("%d/%d%*c",&t.num,&t.den);
  return t;
}

void mostrar_fraccion(t_fraccion f)
{
	if(f.den<0){
		f.num=f.num*-1;
		f.den=f.den*-1;
		}	
	
  printf("\n%d/%d\n",f.num,f.den); 
  
}
