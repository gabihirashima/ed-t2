#include <stdio.h>
#include <stdlib.h>
#include "radio.h"

typedef struct radio{
int id; /*identificador do objeto*/
double x; /*coordenada x do objeto*/
double y; /*coordenada y do objeto*/
char cfill[20]; /*cor de preenchimento do objeto*/
char cstrk[20]; /*cor de borda do objeto*/
}Radio_S;

Radio criaRadio(int id, double x, double y, char *cfill, char *cstrk){
    Radio_S *r;
    r->id = id;
    r->x = x;
    r->y = y;
    strcpy(r->cfill, cfill);
    strcpy(r->cstrk, cstrk);
    return r;
}

int getRadioId(void *radio){
    Radio_S *r = (Radio*)radio;
    return r->id;
}

double getRadioX(void *radio){
    Radio_S *r = (Radio*)radio;
    return r->x;
}

double getRadioY(void *radio){
    Radio_S *r = (Radio*)radio;
    return r->y;
}

char getRadioCFill(void *radio){
    Radio_S *r = (Radio*)radio;
    return r->cfill;
}

char getRadioCStroke(void *radio){
    Radio_S *r = (Radio*)radio;
    return r->cstrk;
}