#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "variaveis.h"
#include "radio.h"
#include "semaforo.h"
#include "quadra.h"
#include "hidrante.h"
#include "formaC.h"
#include "formaL.h"
#include "formaR.h"
#include "formaT.h"

void Svg(listaRadios listaR, listaQuadras listaQ, listaHidrantes listaH, listaSemaforos listaS,
listaCirculos listaC, listaRetangulos listaA, listaTexto listaT){

    FILE *arq;

    arq = fopen("saida.svg", "w+");

      if(arq == NULL){
            printf("Erro ao abrir o arquivo Svg!!");
            system("pause");
            exit(1);
        }    
}