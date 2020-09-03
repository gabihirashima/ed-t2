#ifndef FORMAL_C_
#define FORMAL_C_

typedef void* Linha;

Linha criaLinha(double, double, double, double, char *);

double getLinhaX(Linha);

double getLinhaY(Linha);

double getLinhaX2(Linha);

double getLinhaY2(Linha);

char *getLinhaCor(Linha);

#endif