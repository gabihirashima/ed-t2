#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variaveis.h"
#include "quadra.h"

typedef struct quadra{
char cep[20]; /*identificação de quadra*/
double x; /*coordenada x*/
double y; /*coordenada y*/
double w; /*largura da quadra*/
double h; /*altura da quadra*/
char cfill[20]; /*cor de preenchimento da quadra*/
char cstrk[20]; /*cor da borda da quadra*/
}Quadra_S;

Quadra criaQuadra(char *cep, double x, double y, double w, double h, char *cfill, char *cstrk){
    Quadra_S *q = (Quadra_S*)malloc(sizeof(Quadra_S));
    strcpy(q->cep, cep);
    q->x = x;
    q->y = y;
    q->w = w;
    q->h = h;
    strcpy(q->cfill, cfill);
    strcpy(q->cstrk, cstrk);
    return q;
}

char *getQuadraCep(Quadra quadra){
    Quadra_S *q = (Quadra)quadra;
    return q->cep;
}

double getQuadraX(Quadra quadra){
    Quadra_S *q = (Quadra)quadra;
    return q->x;
}

double getQuadraY(Quadra quadra){
    Quadra_S *q = (Quadra)quadra;
    return q->y;
}

double getQuadraW(Quadra quadra){
    Quadra_S *q = (Quadra)quadra;
    return q->w;
}

double getQuadraH(Quadra quadra){
    Quadra_S *q = (Quadra)quadra;
    return q->h;
}

char *getQuadraCFill(Quadra quadra){
    Quadra_S *q = (Quadra)quadra;
    return q->cfill;
}

char *getQuadraCStroke(Quadra quadra){
    Quadra_S *q = (Quadra)quadra;
    return q->cstrk;
}