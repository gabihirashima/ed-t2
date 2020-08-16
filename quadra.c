#include <stdio.h>
#include <stdlib.h>

typedef struct quadra{
int cep; /*identificação de quadra*/
double x; /*coordenada x*/
double y; /*coordenada y*/
double w; /*largura da quadra*/
double h; /*altura da quadra*/
char cfill[20]; /*cor de preenchimento da quadra*/
char cstrk[20]; /*cor da borda da quadra*/
}Quadra;