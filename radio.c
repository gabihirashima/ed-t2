#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "radio.h"

typedef struct radio{
    char id[20]; /*identificador do objeto*/
    double x; /*coordenada x do objeto*/
    double y; /*coordenada y do objeto*/
    char cfill[20]; /*cor de preenchimento do objeto*/
    char cstrk[20]; /*cor de borda do objeto*/
}Radio_S;

Radio criaRadio(char *id, double x, double y, char *cfill, char *cstrk){
    Radio_S *r = (Radio_S*)malloc(sizeof(Radio_S));
    strcpy(r->id, id);
    r->x = x;
    r->y = y;
    strcpy(r->cfill, cfill);
    strcpy(r->cstrk, cstrk);
    return r;
}

char *getRadioId(Radio radio){
    Radio_S *r = (Radio_S*)radio;
    return r->id;
}

double getRadioX(Radio radio){
    Radio_S *r = (Radio_S*)radio;
    return r->x;
}

double getRadioY(Radio radio){
    Radio_S *r = (Radio_S*)radio;
    return r->y;
}

char *getRadioCFill(Radio radio){
    Radio_S *r = (Radio_S*)radio;
    return r->cfill;
}

char *getRadioCStroke(Radio radio){
    Radio_S *r = (Radio_S*)radio;
    return r->cstrk;
}