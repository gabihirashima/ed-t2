#include <stdlib.h>
#include <stdio.h>
#include "variaveis.h"
#include "listas.h"
#include "radio.h"


void main(int argc, char *argv[]){
    listaStruct listaR = criaLista();
    tipo elemento; 

    elemento = criaRadio(1, 2.3, 2.4, "vermelho", "azul");
    listaR = insereElemento(listaR, elemento);
    elemento = criaRadio(2, 4.7, 5.8, "amarelo", "roxo");
    listaR = insereElemento(listaR, elemento);
    imprimeLista(listaR, 'r');
}