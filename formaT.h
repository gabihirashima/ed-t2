#ifndef FORMAT_C_
#define FORMAT_C_

typedef void* Texto;

Texto criaTexto(double, double, char *, char *, char *);

double getTextoX(Texto);

double getTextoY(Texto);

char *getTextoCorb(Texto);

char *getTextoCorp(Texto);

char *getTextoText(Texto);

#endif