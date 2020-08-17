#include <stdio.h>
#include <stdlib.h>

typedef struct semaforo{
int id; /*identificador do objeto*/
double x; /*coordenada x*/
double y; /*coordenada y*/
char cfill[20]; /*cor de preenchimento do objeto*/
char cstrk[20]; /*cor da borda do objeto*/
}Semaforo;

int getSemaforoId(void *semaforo){
    Semaforo *s = (Semaforo*)semaforo;
    return s->id;
}

double getSemaforoX(void *semaforo){
    Semaforo *s = (Semaforo*)semaforo;
    return s->x;
}

double getSemaforoY(void *semaforo){
    Semaforo *s = (Semaforo*)semaforo;
    return s->y;
}

char getSemaforoCFill(void *semaforo){
    Semaforo *s = (Semaforo*)semaforo;
    return s->cfill;
}

char getSemaforoCStroke(void *semaforo){
    Semaforo *s = (Semaforo*)semaforo;
    return s->cstrk;
}