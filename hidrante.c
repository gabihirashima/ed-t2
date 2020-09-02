#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hidrante.h"

typedef struct hidrante{
int id; /*numero identificador do objeto*/
double x; /*coordenada x*/
double y; /*coordenada y*/
char cfill[20]; /*cor de preenchimento do objeto*/
char cstrk[20]; /*cor da borda do objeto*/
}Hidrante_S;

Hidrante criaHidrante(int id, double x, double y, char *cfill, char *cstrk){
    Hidrante_S *h =(Hidrante_S*)malloc(sizeof(Hidrante_S));
    h->id = id;
    h->x = x;
    h->y = y;
    strcpy(h->cfill, cfill);
    strcpy(h->cstrk, cstrk);
    return h;
}

int getHidranteId(Hidrante hidrante){
    Hidrante_S *h = (Hidrante)hidrante;
    return h->id;
}

double getHidranteX(Hidrante hidrante){
    Hidrante_S *h = (Hidrante)hidrante;
    return h->x;
}

double getHidranteY(Hidrante hidrante){
    Hidrante_S *h = (Hidrante)hidrante;
    return h->y;
}

char getHidranteCFill(Hidrante hidrante){
    Hidrante_S *h = (Hidrante)hidrante;
    return h->cfill;
}

char getHidranteCStroke(Hidrante hidrante){
    Hidrante_S *h = (Hidrante)hidrante;
    return h->cstrk;
}