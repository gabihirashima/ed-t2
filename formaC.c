#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "formaC.h"

typedef struct formaCirculo{
  int id; /*id do circulo*/   
  double r;  /*raio*/
  double x; /*pos x*/
  double y; /*pos y*/
  char corb[20]; /*cor da borda*/
  char corp[20]; /*cor de preenchimento*/
}Circulo_S; 

Circulo criaCirculo(int id, double r, double x, double y, char *corb, char *corp){
    Circulo_S *c =(Circulo_S*)malloc(sizeof(Circulo_S));
    c->id = id;
    c->r = r;
    c->x = x;
    c->y = y;
    strcpy(c->corb, corb);
    strcpy(c->corp, corp);
    return c;
}

int getCirculoId(Circulo circulo){
    Circulo_S *c = (Circulo)circulo;
    return c->id;
}

double getCirculoR(Circulo circulo){
    Circulo_S *c = (Circulo)circulo;
    return c->r;
}

double getCirculoX(Circulo circulo){
    Circulo_S *c = (Circulo)circulo;
    return c->x;
}

double getCirculoY(Circulo circulo){
    Circulo_S *c = (Circulo)circulo;
    return c->y;
}

char *getCirculoCorb(Circulo circulo){
    Circulo_S *c = (Circulo)circulo;
    return c->corb;
}

char *getCirculoCorp(Circulo circulo){
    Circulo_S *c = (Circulo)circulo;
    return c->corp;
}

