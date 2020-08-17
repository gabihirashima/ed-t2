#include <stdio.h>
#include <stdlib.h>

typedef struct formaCirculo{
  double r;  /*raio*/
  double x; /*pos x*/
  double y; /*pos y*/
  char corb[20]; /*cor da borda*/
  char corp[20]; /*cor de preenchimento*/
}Circulo; 

typedef struct formaRetangulo{
  double w; /*largura do retangulo*/
  double h; /*altura do retangulo*/
  double x; /*pos x*/
  double y; /*pos y*/
  char corb[20]; /*cor da borda*/
  char corp [20]; /*cor de preenchimento*/
}Retangulo; 

typedef struct formaTexto{
  double x; /*pos x*/
  double y; /*pos y*/
  char corb[20]; /*cor da borda*/
  char corp [20]; /*cor de preenchimento*/
  char text[50]; /*texto*/
}Texto;

typedef struct formaLinha{
  double x; /*pos x*/
  double y; /*pos y*/
  double x2; /*pos x2*/
  double y2; /*pos y2*/
  char cor[20];
}Linha;

