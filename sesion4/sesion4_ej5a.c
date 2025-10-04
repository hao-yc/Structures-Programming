#include <stdio.h>

#define BASTOS 0
#define ESPADAS 1
#define COPAS 2
#define OROS 3
typedef struct
{
int fig; /* Figura: 12 (Rey), 11 (Caballo), 10 (Sota), 9, ..., 1 */
int pal; /* Palo: OROS, COPAS, ESPADAS, BASTOS */
}tcarta; 
