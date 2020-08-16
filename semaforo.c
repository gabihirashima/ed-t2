#include <stdio.h>
#include <stdlib.h>

typedef struct semaforo{
int id; /*identificador do objeto*/
double x; /*coordenada x*/
double y; /*coordenada y*/
char cfill[20]; /*cor de preenchimento do objeto*/
char cstrk[20]; /*cor da borda do objeto*/
}Semaforo;