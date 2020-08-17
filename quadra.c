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

double getQuadraX(void *quadra){
    Quadra *q = (Quadra*)quadra;
    return q->x;
}

double getQuadraY(void *quadra){
    Quadra *q = (Quadra*)quadra;
    return q->y;
}

double getQuadraW(void *quadra){
    Quadra *q = (Quadra*)quadra;
    return q->w;
}

double getQuadraH(void *quadra){
    Quadra *q = (Quadra*)quadra;
    return q->h;
}

char getQuadraCFill(void *quadra){
    Quadra *q = (Quadra*)quadra;
    return q->cfill;
}

char getQuadraCStroke(void *quadra){
    Quadra *q = (Quadra*)quadra;
    return q->cstrk;
}