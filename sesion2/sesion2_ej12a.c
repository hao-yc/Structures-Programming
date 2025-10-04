#include <stdio.h>

int main()
{
    float nota;

    printf("Introduzca su nota de FO (numero entre 0 y 10): ");
    scanf("%f%*c", &nota);

    if (nota >= 9.0 && 10.0 >=nota)
    {
        printf("\nTiene un sobresaliente\n\n");
    }

    if (nota >= 7.0 && 8.9>=nota)
    {
       printf("\nTiene un notable\n\n");
    }

    if (nota >= 5.0 && 6.9 >=nota)
    {
       printf("\nTiene un aprobado\n\n");
    } 
    
    else if (nota <=5.0 && nota >=0)
    {
       printf("\nHa suspendido; tiene que matricularse de FO de nuevo\n\n");
    }
}
