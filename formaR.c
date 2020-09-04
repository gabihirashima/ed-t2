#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "formaR.h"

typedef struct formaRetangulo{
  int id; /*id*/
  double w; /*largura do retangulo*/
  double h; /*altura do retangulo*/
  double x; /*pos x*/
  double y; /*pos y*/
  char corb[20]; /*cor da borda*/
  char corp [20]; /*cor de preenchimento*/
}Retangulo_S; 

Retangulo criaRetangulo(int id, double w, double h, double x, double y, char *corb, char *corp){
    Retangulo_S *r =(Retangulo_S*)malloc(sizeof(Retangulo_S));
    r->id = id;
    r->w = w;
    r->h = h;
    r->x = x;
    r->y = y;
    strcpy(r->corb, corb);
    strcpy(r->corp, corp);
    return r;
}

int getRetanguloId(Retangulo retangulo){
    Retangulo_S *r = (Retangulo)retangulo;
    return r->id;
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
