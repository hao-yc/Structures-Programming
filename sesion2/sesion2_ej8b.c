#include <stdio.h>

int main(){

	 int h, m ,s;
	 printf("Introduzca una hora en formato hh:mm:ss : ");
	 scanf("%d:%d:%d", &h,&m,&s);
	 
	 if ( h >= 00 && h <= 23 && m >= 00 && m <= 59 && s >= 00 && s <= 59 ){
	 	s++;
	 	if (s==60)
	 	{
	 		s=00;
	 		m++;
	 		if (m==60)
	 		{
	 			m=00;
	 			h++;
	 			if(h=24)
	 				h=00;
	 				}	 
	       }
	}

	printf ("%d:%d:%d\n", h, m,s);
}
