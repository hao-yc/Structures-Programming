#include <stdio.h>

int main()
{
	int k=7, resi;
	char c='a', resc;
	float f=5.5, g=-3.25, resf;
	
	resi= -2 +k;
	printf ("la variable resi vale %d \n", resi );
	
	resi = resi + 2;
	printf ("la variable resi vale %d \n", resi );
	
	resc = c; 
	printf ("la variable resc vale %c \n ", resc);
	
	resi = k%5;
	printf("la variable resi vale %d \n", resi );
	
	resf = (f - g)/2;
	printf("la variable resf vale %.2f\n", resf);
	
	resi = resi*(k - 3);
	printf("la variable resi vale %d \n", resi);
	
	resf = k/((float)resi - 2);
	printf("la variable resf vale %.2f\n", resf);	
	
	resf = f/(resi - 2);
	printf("la variable resf vale %.2f\n", resf);
	
	resi = 2*(k - 3)%3/2;
	printf ("la variable resi vale %d \n", resi );
		
}

