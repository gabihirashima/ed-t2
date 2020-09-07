#include <stdlib.h>
#include <stdio.h>
#include "variaveis.h"
#include "listas.h"
#include "radio.h"
#include "semaforo.h"
#include "quadra.h"
#include "hidrante.h"
#include "formaC.h"
#include "formaL.h"
#include "formaR.h"
#include "formaT.h"
#include "openArq.h"



int main(int argc, char *argv[]){
    listaRadios listaR;
    listaQuadras listaQ;
    listaHidrantes listaH;
    listaSemaforos listaS;
    listaCirculos listaC;
    listaRetangulos listaA;
    listaTexto listaT;
    tipo elemento; 
    int tamanho;

        openGeo(listaR, listaQ, listaH, listaS, listaC, listaR, listaT);

        imprimeLista(listaR, 'r');

        liberaLista(listaR);
        liberaLista(listaQ);
        liberaLista(listaH);
        liberaLista(listaS);
        liberaLista(listaC);
        liberaLista(listaA);
        liberaLista(listaT);

    return 0;
}