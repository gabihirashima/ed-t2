#include <stdlib.h>
#include <stdio.h>
#include "variaveis.h"
#include "listas.h"
#include "radio.h"


void main(int argc, char *argv[]){
    listaStruct listaR = criaLista();

    criaRadio(1, 2.3, 2.4, "vermelho", "azul");
    listaR = insereElemento(listaR, criaRadio);
}