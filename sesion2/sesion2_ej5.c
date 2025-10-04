#include <stdio.h>

int main()
{
   int a, b, aux;

   printf("Introduzca dos valores para las variables a y b: ");
   scanf("%d %d%*c", &a, &b);
   

   /* Complete el programa */
   
   aux = a;
   a=b;
   b=aux;




   
   printf("Variable a: %d\n", a);
   printf("Variable b: %d\n", b);
}
