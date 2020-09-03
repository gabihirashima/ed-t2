#ifndef FORMAC_C_
#define FORMAC_C_

typedef void* Circulo;

Circulo criaCirculo(double, double, double, char *, char *);

double getCirculoR(Circulo);

double getCirculoX(Circulo);

double getCirculoY(Circulo);

char *getCirculoCorb(Circulo);

char *getCirculoCorp(Circulo);

#endif