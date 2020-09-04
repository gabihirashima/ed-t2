#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variaveis.h"
#include "listas.h"
#include "radio.h"

typedef struct no{
    void *elemento;
    struct no *ant;
    struct no *prox;
}No;

typedef struct lista{
    No *primeiro;
    No *ultimo;
}Lista;

/*inicia a lista*/
listaStruct *criaLista(){
    Lista *list = (Lista*)malloc(sizeof(Lista));
    list->primeiro = NULL;
    list->ultimo = NULL;
    return list;
}

/*retorna o numero de elementos da lista*/
int tamanhoLista(listaStruct l, char c){
 Lista *list = (Lista*)l;
 int tamanho = 0;
    No *node = list->primeiro;
        while(node != NULL){
            tamanho += 1;
            node = node->prox;
        }
    return tamanho;
}

/*Imprime a lista completamente*/
listaStruct imprimeLista(listaStruct l, char c){
    Lista *list = (Lista*)l;
    No *node = list->primeiro;
        while(node != NULL){
            if(c == 'r'){
                printf("\n%d, %lf, %lf, %s, %s", getRadioId(node->elemento), getRadioX(node->elemento), getRadioY(node->elemento), getRadioCFill(node->elemento), getRadioCStroke(node->elemento));
            }
            node = node->prox;
        }
}

/*libera a lista completamente*/
listaStruct liberaLista(){

}

/*insere um elemento no final da lista*/
listaStruct insereElemento(listaStruct l, tipo elemento){
    Lista *list = (listaStruct)l;
    
    No* node = (No*)malloc(sizeof(No));
    node->elemento = elemento;
        if(list->primeiro == NULL){ /*se a lista esta vazia*/
            node->ant = NULL; /*o anterior aponta para null*/
            list->primeiro = node; /*o primeiro elemento da lista é node*/
        }
        else{ /*senao*/
            list->ultimo->prox = node; /*o prox do ultimo elemento adicionado aponta para o novo node*/
            node->ant = list->ultimo; /*o ponteiro de anterior aponta pro ultimo elemento adicionado*/
        }

        node->prox = NULL;
        list->ultimo = node; 
}

/*remove um elemento na lista*/
listaStruct removeElemento(listaStruct l, tipo elemento, int id){

}

/*retorna o valor do elemento, caso ele exista*/
listaStruct getElemento(){

}

/*insere um elemento antes da posicao indicada e retorna o indicador para esse elemento, caso a posição indicada exista*/
listaStruct insertBefore(){

}

/*insere um elemento depois da posicao indicada e retorna o indicador para esse elemento, caso a posição indicada exista*/
listaStruct insertAfter(){

}

/*retorna o primeiro elemento da lista, se a lista estiver vazia retorna null*/
listaStruct getFirst(listaStruct l){
    Lista *list = (Lista*)l;
    No *node = list->primeiro;
        if(list->primeiro == NULL){
            return NULL;
        }
        
    return node->elemento;
}

/*retorna o elemento posterior a posicao inserida*/
listaStruct getNext(int n, listaStruct l, char c){
    Lista *list = (Lista*)l;
    No *node = list->primeiro;
    No *aux;
        while (node != NULL){
            if(c == 'r'){
                if(getRadioId(node->elemento) == n){
                    aux = node->prox;
                    return aux;
                }
            }
            else if(c == 'h'){
                if(getHidranteId(node->elemento) == n){
                    aux = node->prox;
                    return aux;
                }
            }
            node = node -> prox;
        }
    return NULL;
}

/*retorna o ultimo elemento da lista, se a lista estiver vazia, retorna null*/
listaStruct getLast(){

}

/*retorna o elemento anterior a posicao inserida*/
listaStruct getPrevious(){

}