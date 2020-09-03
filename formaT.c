#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "formaT.h"

typedef struct formaTexto{
  double x; /*pos x*/
  double y; /*pos y*/
  char corb[20]; /*cor da borda*/
  char corp [20]; /*cor de preenchimento*/
  char text[50]; /*texto*/
}Texto_S;

Texto criaTexto(double x, double y, char *corb, char *corp, char *text){
    Texto_S *t =(Texto_S*)malloc(sizeof(Texto_S));
    t->x = x;
    t->y = y;
    strcpy(t->corb, corb);
    strcpy(t->corp, corp);
    strcpy(t->text, text);
    return t;
}

double getTextoX(Texto texto){
    Texto_S *t = (Texto)texto;
    return t->x;
}

double getTextoY(Texto texto){
    Texto_S *t = (Texto)texto;
    return t->y;
}

char *getTextoCorb(Texto texto){
    Texto_S *t = (Texto)texto;
    return t->corb;
}

char *getTextoCorp(Texto texto){
    Texto_S *t = (Texto)texto;
    return t->corp;
}

char *getTextoText(Texto texto){
    Texto_S *t = (Texto)texto;
    return t->text;
}
