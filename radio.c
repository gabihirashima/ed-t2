#include <stdio.h>
#include <stdlib.h>

typedef struct radio{
int id; /*identificador do objeto*/
double x; /*coordenada x do objeto*/
double y; /*coordenada y do objeto*/
char cfill[20]; /*cor de preenchimento do objeto*/
char cstrk[20]; /*cor de borda do objeto*/
}Radio;

double getRadioX(void *radio){
    Radio *r = (Radio*)radio;
    return r->x;
}

double getRadioY(void *radio){
    Radio *r = (Radio*)radio;
    return r->y;
}

char getRadioCFill(void *radio){
    Radio *r = (Radio*)radio;
    return r->cfill;
}

char getRadioCStroke(void *radio){
    Radio *r = (Radio*)radio;
    return r->cstrk;
}