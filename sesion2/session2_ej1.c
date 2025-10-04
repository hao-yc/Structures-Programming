#include <stdio.h>
#include "colores.h"

int main()
{
	char ini1,ini2,ini3;
	int anys, fecha_nac;
	
	printf("Introduce tus tres iniciales: ");
	scanf("%c%c%c%*c",&ini1,&ini2, &ini3);

	
	printf("Introduce tu anyo de nacimiento: ");
	scanf("%d", &fecha_nac);
	
	anys = 2022-fecha_nac;
	
	printf ("\nHola " );
	cambiar_color(RED);
	printf( "%c%c%c\n", ini1, ini2, ini3);
	
	cambiar_color(DEFAULT);

	printf("El 31/DIC/2022 tendras ");
	cambiar_color(YELLOW);
	printf("%d", anys);
	printf(" años \n");
	
}
