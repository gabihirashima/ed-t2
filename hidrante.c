#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hidrante.h"

typedef struct hidrante{
char *id; /*numero identificador do objeto*/
double x; /*coordenada x*/
double y; /*coordenada y*/
char *cfill; /*cor de preenchimento do objeto*/
char *cstrk; /*cor da borda do objeto*/
}Hidrante_S;

Hidrante criaHidrante(char *id, double x, double y, char *cfill, char *cstrk){
    Hidrante_S *h =(Hidrante_S*)malloc(sizeof(Hidrante_S));
    strcpy(h->id, id);
    h->x = x;
    h->y = y;
    strcpy(h->cfill, cfill);
    strcpy(h->cstrk, cstrk);
    return h;
}

char *getHidranteId(Hidrante hidrante){
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

char *getHidranteCFill(Hidrante hidrante){
    Hidrante_S *h = (Hidrante)hidrante;
    return h->cfill;
}

char *getHidranteCStroke(Hidrante hidrante){
    Hidrante_S *h = (Hidrante)hidrante;
    return h->cstrk;
}