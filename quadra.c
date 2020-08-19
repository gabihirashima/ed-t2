#include <stdio.h>
#include <stdlib.h>
#include "variaveis.h"
#include "quadra.h"

typedef struct quadra{
int cep; /*identificação de quadra*/
double x; /*coordenada x*/
double y; /*coordenada y*/
double w; /*largura da quadra*/
double h; /*altura da quadra*/
char cfill[20]; /*cor de preenchimento da quadra*/
char cstrk[20]; /*cor da borda da quadra*/
}Quadra;

Quadra criaQuadra(listaQuadras *list, int cep, double x, double y, double w, double h, char *cfill, char *cstrk){
    Quadra *q;
    q->cep = cep;
    q->x = x;
    q->y = y;
    q->w = w;
    q->h = h;
    stcpy(q->cfill, cfill);
    strcpy(q->cstrk, cstrk);
    return q;
}

int getQuadraCep(Quadra *quadra){
    Quadra *q = (Quadra*)quadra;
    return q->cep;
}

double getQuadraX(Quadra *quadra){
    Quadra *q = (Quadra*)quadra;
    return q->x;
}

double getQuadraY(Quadra *quadra){
    Quadra *q = (Quadra*)quadra;
    return q->y;
}

double getQuadraW(Quadra *quadra){
    Quadra *q = (Quadra*)quadra;
    return q->w;
}

double getQuadraH(Quadra *quadra){
    Quadra *q = (Quadra*)quadra;
    return q->h;
}

char getQuadraCFill(Quadra *quadra){
    Quadra *q = (Quadra*)quadra;
    return q->cfill;
}

char getQuadraCStroke(Quadra *quadra){
    Quadra *q = (Quadra*)quadra;
    return q->cstrk;
}