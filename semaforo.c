#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "semaforo.h"

typedef struct semaforo{
int id; /*identificador do objeto*/
double x; /*coordenada x*/
double y; /*coordenada y*/
char cfill[20]; /*cor de preenchimento do objeto*/
char cstrk[20]; /*cor da borda do objeto*/
}Semaforo_S;

Semaforo criaSemaforo(int id, double x, double y, char *cfill, char *cstrk){
    Semaforo_S *s;
    s->id = id;
    s->x = x;
    s->y = y;
    strcpy(s->cfill, cfill);
    strcpy(s->cstrk, cstrk);
    return s;
}

int getSemaforoId(Semaforo semaforo){
    Semaforo_S *s = (Semaforo)semaforo;
    return s->id;
}

double getSemaforoX(Semaforo semaforo){
    Semaforo_S *s = (Semaforo)semaforo;
    return s->x;
}

double getSemaforoY(Semaforo semaforo){
    Semaforo_S *s = (Semaforo)semaforo;
    return s->y;
}

char getSemaforoCFill(Semaforo semaforo){
    Semaforo_S *s = (Semaforo)semaforo;
    return s->cfill;
}

char getSemaforoCStroke(Semaforo semaforo){
    Semaforo_S *s = (Semaforo)semaforo;
    return s->cstrk;
}