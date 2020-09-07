#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
    listaRadios listaR = criaLista();
    listaQuadras listaQ = criaLista();
    listaHidrantes listaH = criaLista();
    listaSemaforos listaS = criaLista();
    listaCirculos listaC = criaLista();
    listaRetangulos listaA = criaLista();
    listaTexto listaT = criaLista();
    tipo elemento; 
    int tamanho;

        openGeo(listaR, listaQ, listaH, listaS, listaC, listaA, listaT);

        //imprimeLista(listaR, 'r');

        liberaLista(listaR);
        liberaLista(listaQ);
        liberaLista(listaH);
        liberaLista(listaS);
        liberaLista(listaC);
        liberaLista(listaA);
        liberaLista(listaT);

    return 0;
}