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


void main(int argc, char *argv[]){
    listaStruct listaR = criaLista();
    tipo elemento; 
    int tamanho;

    elemento = criaRadio(1, 2.3, 2.4, "vermelho", "azul");
    printf("\n%d, %lf, %lf, %s, %s", getRadioId(elemento), getRadioX(elemento), getRadioY(elemento), getRadioCFill(elemento), getRadioCStroke(elemento));
    listaR = insereElemento(listaR, elemento);
    elemento = criaRadio(2, 4.7, 5.8, "amarelo", "roxo");
    listaR = insereElemento(listaR, elemento);
    elemento = criaRadio(3, 14.7, 5.8, "rosa", "roxo");
    listaR = insereElemento(listaR, elemento);
    imprimeLista(listaR, 'r');
    elemento = criaRadio(4, 24.7, 5.8, "rosa", "roxo");
    listaR = insertBefore(listaR, elemento, 2, 'r');
    imprimeLista(listaR, 'r');
    tamanho = tamanhoLista(listaR);
    removeElemento(listaR, elemento, 4, 'r');
    printf("\ntamanho da lista: %d", tamanho);
    liberaLista(listaR);
}