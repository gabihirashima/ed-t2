#ifndef FORMAR_C_
#define FORMAR_C_

typedef void* Retangulo;

Retangulo criaRetangulo(double, double, double, double, char *, char *);

double getRetanguloW(Retangulo);

double getRetanguloH(Retangulo);

double getRetanguloX(Retangulo);

double getRetanguloY(Retangulo);

char *getRetanguloCorb(Retangulo);

char *getRetanguloCorp(Retangulo);

#endif