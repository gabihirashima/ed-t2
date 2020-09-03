#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "formaR.h"

typedef struct formaRetangulo{
  double w; /*largura do retangulo*/
  double h; /*altura do retangulo*/
  double x; /*pos x*/
  double y; /*pos y*/
  char corb[20]; /*cor da borda*/
  char corp [20]; /*cor de preenchimento*/
}Retangulo_S; 

Retangulo criaRetangulo(double w, double h, double x, double y, char *corb, char *corp){
    Retangulo_S *s =(Retangulo_S*)malloc(sizeof(Retangulo_S));
    s->w = w;
    s->h = h;
    s->x = x;
    s->y = y;
    strcpy(s->corb, corb);
    strcpy(s->corp, corp);
    return s;
}

double getRetanguloW(Retangulo retangulo){
    Retangulo_S *r = (Retangulo)retangulo;
    return r->w;
}

double getRetanguloH(Retangulo retangulo){
    Retangulo_S *r = (Retangulo)retangulo;
    return r->h;
}

double getRetanguloX(Retangulo retangulo){
    Retangulo_S *r = (Retangulo)retangulo;
    return r->x;
}

double getRetanguloY(Retangulo retangulo){
    Retangulo_S *r = (Retangulo)retangulo;
    return r->y;
}

char *getRetanguloCorb(Retangulo retangulo){
    Retangulo_S *r = (Retangulo)retangulo;
    return r->corb;
}

char *getRetanguloCorp(Retangulo retangulo){
    Retangulo_S *r = (Retangulo)retangulo;
    return r->corp;
}
