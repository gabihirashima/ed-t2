#include <stdio.h>
#include <stdlib.h>

typedef struct hidrante{
int id; /*numero identificador do objeto*/
double x; /*coordenada x*/
double y; /*coordenada y*/
char cfill[20]; /*cor de preenchimento do objeto*/
char cstrk[20]; /*cor da borda do objeto*/
}Hidrante;

double getHidranteX(void *hidrante){
    Hidrante *h = (Hidrante*)hidrante;
    return h->x;
}

double getHidranteY(void *hidrante){
    Hidrante *h = (Hidrante*)hidrante;
    return h->y;
}

char getHidranteCFill(void *hidrante){
    Hidrante *h = (Hidrante*)hidrante;
    return h->cfill;
}

char getHidranteCStroke(void *hidrante){
    Hidrante *h = (Hidrante*)hidrante;
    return h->cstrk;
}