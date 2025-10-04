#include <stdio.h>

typedef struct
{
  	int num;   /* Numerador */
  	int den;   /* Denominador */
} t_fraccion;

int mcd(int a, int b);
int mcm(int a, int b);

t_fraccion leer_fraccion();
void mostrar_fraccion(t_fraccion f);
void mostrar_oper_fracciones(char operador, t_fraccion f1, t_fraccion f2, t_fraccion res);
t_fraccion operacion_fracciones(char operador, t_fraccion f1, t_fraccion f2);

int main()
{	
	t_fraccion f;
	t_fraccion operacion_fracciones(char operador, t_fraccion f1, t_fraccion f2)
 	f=leer_fraccion(); 
 	mostrar_fraccion(f)
}

int mcd(int a, int b)
{
  int r;
 
  r = a%b;
  while (r!=0)
  {
    a = b;
    b = r;
    r = a%b;
  }
 return(b);
}

int mcm(int a, int b)
{
  /* mcm(a,b)=a*b/mcd(a,b); */
  return(a*b/mcd(a,b));
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


void mostrar_oper_fracciones(char operador, t_fraccion f1, t_fraccion f2, t_fraccion res)
{

  printf("\nResultado de la");
  switch(operador)
  {
    case '+': 
	printf(" suma es: ");
        break;
     case '-': 
	printf(" resta es: ");
        break;
     case '*': 
	printf(" multiplicacion es: ");
        break;
    case '/': 
	printf(" division es: ");
        break;
  }
  mostrar_fraccion(f1);
  printf(" %c ", operador);
  mostrar_fraccion(f2);
  printf(" = ");
  mostrar_fraccion(res);
  printf("\n");
}

t_fraccion operacion_fracciones(char operador, t_fraccion f1, t_fraccion f2)
{
  tfraccion res;
  switch(operador)
  {
    case '+': if(f1.den==f2.den)
    		       res=(f1.num+f2.num)/f1.num;
    		else if(f1.den!=mcd(f1.den,f2.den))
    			res=(f1.num*mcm(f1.den,f2.den)+f2.num)/mcd(f1.den,f2.en);
    		else if(f2.den!=mcd(f1.den,f2.den)
    		     	res=(f1.num+f2.num*mcm(f1.den,f2.den))/mcd(f1.den,f2.en);
    		else
    		        res=(f1.num*mcm(f1.den,f2.den)+f2.num*mcm(f1.den,f2.den))/mcd(f1.den,f2.en);
    		break;
    
    case '-':if(f1.den==f2.den)
    		       res=(f1.num-f2.num)/f1.num;
    		else if(f1.den!=mcd(f1.den,f2.den))
    			res=(f1.num*mcm(f1.den,f2.den)-f2.num)/mcd(f1.den,f2.en);
    		else if(f2.den!=mcd(f1.den,f2.den)
    		     	res=(f1.num-f2.num*mcm(f1.den,f2.den))/mcd(f1.den,f2.en);
    		else
    		        res=(f1.num*mcm(f1.den,f2.den)-f2.num*mcm(f1.den,f2.den))/mcd(f1.den,f2.en);
    		break; 
    case '*': res=(f1.num*f2.num)/(f1.den*f2.den);
    	break;
    case '/': res=(f1.num*f2.den)/(f1.den*f2.num);
    	break;
  }
  return(res);
  }
}
