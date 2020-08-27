#include <stdio.h>
#include <stdlib.h>
#include "variaveis.h"
#include "listas.h"

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
void criaLista(){
    Lista *list = (Lista*)malloc(sizeof(Lista));
    list->primeiro = NULL;
    list->ultimo = NULL;
    return list;
}

/*retorna o numero de elementos da lista*/
void tamanhoLista(){

}

/*Imprime a lista completamente*/
void imprimeLista(){

}

/*libera a lista completamente*/
void liberaLista(){

}

/*insere um elemento no final da lista*/
void insereElemento(Lista *l, tipo elemento){
    Lista *list = (Lista*)l;
    
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
void removeElemento(Lista *l, tipo  elemento, int id){
    Lista *list = (Lista*)l; 
    Lista *aux = NULL;

        while(list != NULL){

        } 
}

/*retorna o valor do elemento, caso ele exista*/
void getElemento(){

}

/*insere um elemento antes da posicao indicada e retorna o indicador para esse elemento, caso a posição indicada exista*/
void insertBefore(){

}

/*insere um elemento depois da posicao indicada e retorna o indicador para esse elemento, caso a posição indicada exista*/
void insertAfter(){

}

/*retorna o primeiro elemento da lista, se a lista estiver vazia retorna null*/
void getFirst(){

}

/*retorna o elemento posterior a posicao inserida*/
void getNext(){

}

/*retorna o ultimo elemento da lista, se a lista estiver vazia, retorna null*/
void getLast(){

}

/*retorna o elemento anterior a posicao inserida*/
void getPrevious(){

}