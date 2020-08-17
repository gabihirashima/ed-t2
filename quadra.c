#include <stdio.h>
#include <stdlib.h>
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