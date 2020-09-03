#include <stdio.h>
#include <stdlib.h>

typedef struct formaRetangulo{
  double w; /*largura do retangulo*/
  double h; /*altura do retangulo*/
  double x; /*pos x*/
  double y; /*pos y*/
  char corb[20]; /*cor da borda*/
  char corp [20]; /*cor de preenchimento*/
}Retangulo_S; 