#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "formaL.h"

typedef struct formaLinha{
  int id; /*id*/
  double x; /*pos x*/
  double y; /*pos y*/
  double x2; /*pos x2*/
  double y2; /*pos y2*/
  char cor[20];
}Linha_S;

Linha criaLinha(int id, double x, double y, double x2, double y2, char *cor){
    Linha_S *l =(Linha_S*)malloc(sizeof(Linha_S));
    l->id = id;
    l->x = x;
    l->y = y;
    l->x2 = x2;
    l->y2 = y2;
    strcpy(l->cor, cor);
    return l;
}

int getLinhaId(Linha linha){
    Linha_S *l = (Linha)linha;
    return l->id;
}

double getLinhaX(Linha linha){
    Linha_S *l = (Linha)linha;
    return l->x;
}

double getLinhaY(Linha linha){
    Linha_S *l = (Linha)linha;
    return l->y;
}

double getLinhaX2(Linha linha){
    Linha_S *l = (Linha)linha;
    return l->x2;
}

double getLinhaY2(Linha linha){
    Linha_S *l = (Linha)linha;
    return l->y2;
}

char *getLinhaCor(Linha linha){
    Linha_S *l = (Linha)linha;
    return l->cor;
}
