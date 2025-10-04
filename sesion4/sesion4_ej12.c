#include <stdio.h>

//#include 'colours.h'


#define BASTOS 0

#define ESPADAS 1

#define COPAS 2

#define OROS 3

typedef struct

{

 int fig; /* Figura: 12 (Rey), 11 (Caballo), 10 (Sota), 9, ..., 1 */

 int pal; /* Palo: OROS, COPAS, ESPADAS, BASTOS */


}tcarta;



int main(){

    

    tcarta t;

    char fig;

    char pal;

    //char fig_char, pal_char;

    char separador;

    tcarta carta;

    tcarta cmax;

    

    

    

    printf("Figura carta: r o R, c o C, s o S, 9, ... , 1\n");

    printf("Palo carta: o o O(OROS), c o C(COPAS), e o E(ESPADAS) o b o B(BASTOS)\n");

    printf("Introduzca cartas (fig,palo),..,(fig,palo). : ");

    

    scanf("(%c,%c)%c%*c",&fig,&pal,&separador);

    //damos valor a carta


    

    if (fig=='s' || fig=='S')

        t.fig=10;

    else if (fig=='c' || fig=='C')

        t.fig=11;

    else if (fig=='r' || fig=='R')

        t.fig=12;

    else if (fig=='9')

        t.fig=9;

    else if (fig=='8')

        t.fig=8;

    else if (fig=='7')

        t.fig=7;

    else if (fig=='6')

        t.fig=6;

    else if (fig=='5')

        t.fig=5;

    else if (fig=='4')

        t.fig=4;

    else if (fig=='3')

        t.fig=3;

    else if (fig=='2')

        t.fig=2;

    else if (fig=='1')

        t.fig=1;

    

    

    

    if (pal=='o' || pal=='O')

        t.pal=OROS;

    else if (pal=='c' || pal=='C')

        t.pal=COPAS;

    else if (pal=='e' || pal=='E')

        t.pal=ESPADAS;

    else if (pal=='b' || pal=='B')

        t.pal=BASTOS;

    

    carta.fig =t.fig;

    carta.pal =t.pal;

    

    printf("sadasd  %d   %d ,\n",carta.fig, carta.pal);

    

    cmax.pal=0;

    cmax.fig=0;

    

    do{

        if (carta.pal>cmax.pal)

          cmax.pal = carta.pal;

        else if (carta.pal==cmax.pal)

        {

          if (carta.fig > cmax.fig)

            cmax.fig = carta.fig;

        }

        

    scanf("(%c,%c)%c%*c",&fig,&pal,&separador);

        carta.fig=fig;

        carta.pal=pal;

        

        

        

    } while(separador!='.');

        

         //damos valor a carta

   t.fig=cmax.fig;

   t.pal=cmax.pal;

    

   

    

    switch(t.fig)

    {

        case 10:

            printf("\n(S,");

            break;

        case 11:

            printf("\n(C,");

            break;

        case 12:

            printf("\n(R,");

            break;

        case 9:

            printf("\n(9,");

            break;

        case 8:

            printf("\n(8,");

            break;

        case 7:

            printf("\n(7,");

            break;

        case 6:

            printf("\n(6,");

            break;

        case 5:

            printf("\n(5,");

            break;

        case 4:

            printf("\n(4,");

            break;

        case 3:

            printf("\n(3,");

            break;

        case 2:

            printf("\n(2,");

            break;

        case 1:

            printf("\n(1,");

            break;

    }

    

   switch(t.pal)

    {

        case OROS:

            //cambiar_color(YELLOW);

            printf("O)");

            break;

        case COPAS:

            //cambiar_color(RED);

            printf("C)");

            break;

        case ESPADAS:

            //cambiar_color(BLUE);

            printf("E)");

            break;

        case BASTOS:

            //cambiar_color(GREEN);

            printf("B)");

            break;

    }

    printf("\n");

    

    

    

   

   

  }



