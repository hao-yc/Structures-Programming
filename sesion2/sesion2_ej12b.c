#include <stdio.h>

int main()
{
    float nota;

    printf("Introduzca su nota de FO (numero entre 0 y 10): ");
    scanf("%f%*c", &nota);

    if (nota >= 5.0 && nota <= 6.9)
    {
       printf("\nTiene un aprobado\n\n");
    }

    else if (nota >= 7.0 && nota <=8.9)
    {
       printf("\nTiene un notable\n\n");
    }

    else if (nota >= 9.0)
    {
       printf("\nTiene un sobresaliente\n\n");
    }

    else
    {
       printf("\nHa suspendido; tiene que matricularse de FO de nuevo\n\n");
    }
}
