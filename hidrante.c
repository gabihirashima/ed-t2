#include <stdio.h>
#include <stdlib.h>
#include "hidrante.h"

typedef struct hidrante{
int id; /*numero identificador do objeto*/
double x; /*coordenada x*/
double y; /*coordenada y*/
char cfill[20]; /*cor de preenchimento do objeto*/
char cstrk[20]; /*cor da borda do objeto*/
}Hidrante_S;

Hidrante criaHidrante(int id, double x, double y, char *cfill, char *cstrk){
    Hidrante_S *h;
    h->id = id;
    h->x = x;
    h->y = y;
    strcpy(h->cfill, cfill);
    strcpy(h->cstrk, cstrk);
    return h;
}

int getHidranteId(void *hidrante){
    Hidrante_S *h = (Hidrante*)hidrante;
    return h->id;
}

double getHidranteX(void *hidrante){
    Hidrante_S *h = (Hidrante*)hidrante;
    return h->x;
}

double getHidranteY(void *hidrante){
    Hidrante_S *h = (Hidrante*)hidrante;
    return h->y;
}

char getHidranteCFill(void *hidrante){
    Hidrante_S *h = (Hidrante*)hidrante;
    return h->cfill;
}

char getHidranteCStroke(void *hidrante){
    Hidrante_S *h = (Hidrante*)hidrante;
    return h->cstrk;
}