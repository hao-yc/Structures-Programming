#include <stdio.h>
	

typedef struct
{
	int num; /* Numerador */
	int den; /* Denominador */
}tfraccion;



int main(){

	tfraccion f1, f2, res_m,res_d,r,r2;
	
	int p1,p2,a1,a2;
	
	printf("Fraccion 1 (formato x/y): ");
	scanf("%d/%d", &f1.num,&f1.den);
	
	printf("Fraccion 2 (formato x/y): ");
	scanf("%d/%d", &f2.num,&f2.den);
	
	res_m.num = f1.num*f2.num;  // multriplicacion
	res_m.den = f1.den*f2.den;
	
	res_d.num= f1.num*f2.den; // division
	res_d.den=f1.den*f2.num;
	
	printf("RESULTADO DE LAS OPERACIONES: \n\n");
	

	if (f1.den<0){ //cambiar el negativo al numerador de f1
		p1=f1.den*-1;
		a1=f1.num*-1;   
	}
	else { p1=f1.den;
		a1=f1.num;
	
	}
	if (f2.den<0){ //cambiar el negativo al numerador de f2
		p2=f2.den*-1;
		a2=f2.num*-1;	
	}
	else{ p2=f2.den;
		a2=f2.num;			
	}

	if (p1!=p2){
		r.num=a1*p2+a2*p1;//suma
		r.den= p1*p2;
		
		r2.num=a1*p2-a2*p1;//division
		r2.den= p1*p2;
		/* if(f1.den%f2.den==0 || f2.den%f1.den==0){
		 	if(f1.den>f2.den){ 
		 		r.den=f1.den;
		 	}
		 	else r.den=f2.den;
		 }
		  else r.den=f1.den*f2.den;*/
	}
	else {
		r.num=a1+a2; //suma
		r.den=p1;
		
		r2.num=a1-a2;//division
		r2.den=p1;
		
		
	}
	
	printf("Suma: %d/%d + %d/%d = %d/%d\n\n",f1.num,f1.den,f2.num,f2.den,r.num,r.den);
	printf("Resta: %d/%d - %d/%d = %d/%d\n\n",f1.num,f1.den,f2.num,f2.den,r2.num,r2.den);
	printf("Multiplicacion: %d/%d * %d/%d = %d/%d\n\n",f1.num,f1.den,f2.num,f2.den,res_m.num,res_m.den);
	printf("Divisiones: %d/%d / %d/%d = %d/%d\n",f1.num,f1.den,f2.num,f2.den,res_d.num,res_d.den);
}
