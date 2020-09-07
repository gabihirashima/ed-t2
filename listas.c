#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variaveis.h"
#include "listas.h"
#include "radio.h"
#include "semaforo.h"
#include "quadra.h"
#include "hidrante.h"
#include "formaC.h"
#include "formaL.h"
#include "formaT.h"
#include "formaR.h"

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
listaStruct criaLista(){
    Lista *list = (Lista*)malloc(sizeof(Lista));
    list->primeiro = NULL;
    list->ultimo = NULL;
    return list;
}

/*retorna o numero de elementos da lista*/
int tamanhoLista(listaStruct l){
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
void imprimeLista(listaStruct l, char c){
    Lista *list = (Lista*)l;
    No *node = list->primeiro;
        while(node != NULL){
            if(c == 'r'){
                printf("\n%s, %lf, %lf, %s, %s", getRadioId(node->elemento), getRadioX(node->elemento), getRadioY(node->elemento), getRadioCFill(node->elemento), getRadioCStroke(node->elemento));
            }
            else if(c == 'h'){
                printf("\n%s, %lf, %lf, %s, %s", getHidranteId(node->elemento), getHidranteX(node->elemento), getHidranteY(node->elemento), getHidranteCFill(node->elemento), getHidranteCStroke(node->elemento));
            }
            node = node->prox;
        }
}

/*libera a lista completamente*/
void liberaLista(listaStruct l){
    Lista *list = (Lista*)l;
    No *node = list->primeiro;
    No *aux;
        while(node != NULL){
            aux = node->prox;
                free(node->elemento);
                free(node);
            node = aux;
        }
    free(list); 
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
    return list; 
}

/*remove um elemento na lista*/
listaStruct removeElemento(listaStruct l, char *id, char c){
    if(getElemento(id, l, c) != 0){
        Lista *list = (listaStruct)l;
         
         No *inicio = list->primeiro;
         No *aux_1; 
         No *aux_2;
         No *aux_3;
         while (inicio != NULL){        
                if(c == 'r'){
                    if((strcmp(getRadioId(inicio->elemento), id)) == 0){
                        if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->prox;
                            aux_2->ant = NULL;
                            list->primeiro = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        else if(inicio == list->ultimo){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            aux_2->prox = NULL;
                            list->ultimo = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        else{
                            aux_1 = inicio;
                            aux_2 = inicio->prox;
                            aux_3 = inicio->ant;
                            aux_2->ant = aux_3;
                            aux_3->prox = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        return list;
                    }
                    inicio = inicio->prox;
                }

                if(c == 's'){
                    if((strcmp(getSemaforoId(inicio->elemento), id)) == 0){
                        if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->prox;
                            aux_2->ant = NULL;
                            list->primeiro = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        else if(inicio == list->ultimo){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            aux_2->prox = NULL;
                            list->ultimo = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        else{
                            aux_1 = inicio;
                            aux_2 = inicio->prox;
                            aux_3 = inicio->ant;
                            aux_2->ant = aux_3;
                            aux_3->prox = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        return list;
                    }
                    inicio = inicio->prox;
                }

                if(c == 'q'){
                    if((strcmp(getQuadraCep(inicio->elemento), id)) == 0){
                        if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->prox;
                            aux_2->ant = NULL;
                            list->primeiro = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        else if(inicio == list->ultimo){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            aux_2->prox = NULL;
                            list->ultimo = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        else{
                            aux_1 = inicio;
                            aux_2 = inicio->prox;
                            aux_3 = inicio->ant;
                            aux_2->ant = aux_3;
                            aux_3->prox = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        return list;
                    }
                    inicio = inicio->prox;
                }

                if(c == 'h'){
                    if((strcmp(getHidranteId(inicio->elemento), id)) == 0){
                        if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->prox;
                            aux_2->ant = NULL;
                            list->primeiro = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        else if(inicio == list->ultimo){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            aux_2->prox = NULL;
                            list->ultimo = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        else{
                            aux_1 = inicio;
                            aux_2 = inicio->prox;
                            aux_3 = inicio->ant;
                            aux_2->ant = aux_3;
                            aux_3->prox = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        return list;
                    }
                    inicio = inicio->prox;
                }
            }
    }
    return NULL;  
}

listaStruct removeForma(listaStruct l, int id, char c){
    if(getForma(id, l, c) != 0){
        Lista *list = (listaStruct)l;
         
         No *inicio = list->primeiro;
         No *aux_1; 
         No *aux_2;
         No *aux_3;

             while (inicio != NULL){  
                 if(c == 'c'){
                    if(getCirculoId(inicio->elemento) == id){
                        if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->prox;
                            aux_2->ant = NULL;
                            list->primeiro = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        else if(inicio == list->ultimo){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            aux_2->prox = NULL;
                            list->ultimo = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        else{
                            aux_1 = inicio;
                            aux_2 = inicio->prox;
                            aux_3 = inicio->ant;
                            aux_2->ant = aux_3;
                            aux_3->prox = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        return list;
                    }
                    inicio = inicio->prox;
                }

                if(c == 'l'){
                    if(getLinhaId(inicio->elemento) == id){
                        if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->prox;
                            aux_2->ant = NULL;
                            list->primeiro = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        else if(inicio == list->ultimo){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            aux_2->prox = NULL;
                            list->ultimo = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        else{
                            aux_1 = inicio;
                            aux_2 = inicio->prox;
                            aux_3 = inicio->ant;
                            aux_2->ant = aux_3;
                            aux_3->prox = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        return list;
                    }
                    inicio = inicio->prox;
                }

                if(c == 'a'){
                    if(getRetanguloId(inicio->elemento) == id){
                        if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->prox;
                            aux_2->ant = NULL;
                            list->primeiro = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        else if(inicio == list->ultimo){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            aux_2->prox = NULL;
                            list->ultimo = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        else{
                            aux_1 = inicio;
                            aux_2 = inicio->prox;
                            aux_3 = inicio->ant;
                            aux_2->ant = aux_3;
                            aux_3->prox = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        return list;
                    }
                    inicio = inicio->prox;
                }

                if(c == 't'){
                    if(getTextoId(inicio->elemento) == id){
                        if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->prox;
                            aux_2->ant = NULL;
                            list->primeiro = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        else if(inicio == list->ultimo){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            aux_2->prox = NULL;
                            list->ultimo = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        else{
                            aux_1 = inicio;
                            aux_2 = inicio->prox;
                            aux_3 = inicio->ant;
                            aux_2->ant = aux_3;
                            aux_3->prox = aux_2;
                            free(aux_1->elemento);
                            free(aux_1);
                        }
                        return list;
                    }
                    inicio = inicio->prox;
                }
             }
    }
    return NULL;
}

/*retorna o conteudo do elemento, caso ele exista*/
listaStruct getElemento(char *id, listaStruct l, char c){
    Lista *list = (Lista*)l;
    No *node = list->primeiro;
        while (node != NULL){
            if(c == 'r'){
                 if((strcmp(getRadioId(node->elemento), id)) == 0){
                    return node->elemento;
                }
            }
            else if(c == 'h'){
                if((strcmp(getHidranteId(node->elemento), id)) == 0){
                    return node->elemento;
                }
            }
            else if(c == 'q'){
                if((strcmp(getQuadraCep(node->elemento), id)) == 0){
                    return node->elemento;
                }
            }
            else if(c == 's'){
                 if((strcmp(getSemaforoId(node->elemento), id)) == 0){
                    return node->elemento;
                }
            }
            node = node -> prox;
        }
    return NULL;
}

listaStruct getForma(int id, listaStruct l, char c){
    Lista *list = (Lista*)l;
    No *node = list->primeiro;
        while (node != NULL){
            if(c == 'c'){
                if(getTextoId(node->elemento) == id){
                    return node->elemento;
                }
            }
            else if(c == 'l'){
                if(getLinhaId(node->elemento) == id){
                    return node->elemento;
                }
            }
            else if(c == 'a'){
                if(getRetanguloId(node->elemento) == id){
                    return node->elemento;
                }
            }
            else if(c == 't'){
                if(getTextoId(node->elemento) == id){
                    return node->elemento;
                }
            }
            node = node -> prox;
        }
    return NULL;
}

/*insere um elemento antes da posicao indicada e retorna o indicador para esse elemento, caso a posição indicada exista*/
listaStruct insertBefore(listaStruct l, tipo elemento, char *id, char c){
    if((getElemento(id, l, c)) != NULL){
         Lista *list = (listaStruct)l;
    
         No* node = (No*)malloc(sizeof(No));
         node->elemento = elemento;
         
         No *inicio = list->primeiro;
         No *aux_1; 
         No *aux_2;

            while (inicio != NULL){
                if(c == 'r'){
                    if((strcmp(getRadioId(inicio->elemento), id)) == 0){
                       if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_1->ant = node;
                            node->prox = aux_1;
                            node->ant = NULL;
                            list->primeiro = node;
                            return list; 
                        }
                       else if(inicio!= list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            node->ant = aux_2;
                            node->prox = aux_1;
                            aux_1->ant = node;
                            aux_2->prox = node;
                            return list; 
                       }
                    }
                    inicio = inicio->prox;
                }
                else if(c == 'h'){
                    if((strcmp(getHidranteId(inicio->elemento), id)) == 0){
                       if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_1->ant = node;
                            node->prox = aux_1;
                            node->ant = NULL;
                            list->primeiro = node;
                            return list; 
                        }
                       else if(inicio!= list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            node->ant = aux_2;
                            node->prox = aux_1;
                            aux_1->ant = node;
                            aux_2->prox = node;
                            return list; 
                       }
                    }
                    inicio = inicio->prox;
                }
                else if(c == 'q'){
                    if((strcmp(getQuadraCep(inicio->elemento), id)) == 0){
                       if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_1->ant = node;
                            node->prox = aux_1;
                            node->ant = NULL;
                            list->primeiro = node;
                            return list; 
                        }
                       else if(inicio!= list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            node->ant = aux_2;
                            node->prox = aux_1;
                            aux_1->ant = node;
                            aux_2->prox = node;
                            return list; 
                       }
                    }
                    inicio = inicio->prox;
                }
                else if(c == 's'){
                   if((strcmp(getSemaforoId(inicio->elemento), id)) == 0){
                       if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_1->ant = node;
                            node->prox = aux_1;
                            node->ant = NULL;
                            list->primeiro = node;
                            return list; 
                        }
                       else if(inicio!= list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            node->ant = aux_2;
                            node->prox = aux_1;
                            aux_1->ant = node;
                            aux_2->prox = node;
                            return list; 
                       }
                    }
                    inicio = inicio->prox;
                }
               
            }
    }
    return NULL;
}

listaStruct insertBeforeElemento(listaStruct l, tipo elemento, int id, char c){
    if((getForma(id, l, c)) != NULL){
         Lista *list = (listaStruct)l;
    
         No* node = (No*)malloc(sizeof(No));
         node->elemento = elemento;
         
         No *inicio = list->primeiro;
         No *aux_1; 
         No *aux_2;

            while (inicio != NULL){
                 if(c == 'c'){
                    if(getTextoId(node->elemento) == id){
                       if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_1->ant = node;
                            node->prox = aux_1;
                            node->ant = NULL;
                            list->primeiro = node;
                            return list; 
                        }
                       else if(inicio!= list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            node->ant = aux_2;
                            node->prox = aux_1;
                            aux_1->ant = node;
                            aux_2->prox = node;
                            return list; 
                       }
                    }
                    inicio = inicio->prox;
                }
                else if(c == 'l'){
                    if(getLinhaId(node->elemento) == id){
                       if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_1->ant = node;
                            node->prox = aux_1;
                            node->ant = NULL;
                            list->primeiro = node;
                            return list; 
                        }
                       else if(inicio!= list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            node->ant = aux_2;
                            node->prox = aux_1;
                            aux_1->ant = node;
                            aux_2->prox = node;
                            return list; 
                       }
                    }
                    inicio = inicio->prox;
                }
                else if(c == 'a'){
                    if(getRetanguloId(node->elemento) == id){
                       if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_1->ant = node;
                            node->prox = aux_1;
                            node->ant = NULL;
                            list->primeiro = node;
                            return list; 
                        }
                       else if(inicio!= list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            node->ant = aux_2;
                            node->prox = aux_1;
                            aux_1->ant = node;
                            aux_2->prox = node;
                            return list; 
                       }
                    }
                    inicio = inicio->prox;
                }
                else if(c == 't'){
                    if(getTextoId(node->elemento) == id){
                       if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_1->ant = node;
                            node->prox = aux_1;
                            node->ant = NULL;
                            list->primeiro = node;
                            return list; 
                        }
                       else if(inicio!= list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            node->ant = aux_2;
                            node->prox = aux_1;
                            aux_1->ant = node;
                            aux_2->prox = node;
                            return list; 
                       }
                    }
                    inicio = inicio->prox;
                }
            }
    }
    return NULL;
}

/*insere um elemento depois da posicao indicada e retorna o indicador para esse elemento, caso a posição indicada exista*/
listaStruct insertAfter(listaStruct l, tipo elemento, char *id, char c){
    if((getElemento(id, l, c)) != NULL){
         Lista *list = (listaStruct)l;
    
         No* node = (No*)malloc(sizeof(No));
         node->elemento = elemento;
         
         No *inicio = list->primeiro;
         No *aux_1; 
         No *aux_2;

            while (inicio != NULL){
                if(c == 'r'){
                    if((strcmp(getRadioId(inicio->elemento), id)) == 0){
                       if(inicio == list->ultimo){
                            aux_1 = inicio;
                            aux_1->prox = node;
                            node->prox = NULL;
                            node->ant = aux_1;
                            list->ultimo = node;
                            return list; 
                        }
                       else if(inicio!= list->ultimo){
                            aux_1 = inicio;
                            aux_2 = inicio->prox;
                            aux_1->prox = node;
                            aux_2->ant = node;
                            node->ant = aux_1;
                            node->prox = aux_2;
                            return list; 
                       }
                    }
                    inicio = inicio->prox;
                }
                else if(c == 'h'){
                    if((strcmp(getHidranteId(inicio->elemento), id)) == 0){
                       if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_1->ant = node;
                            node->prox = aux_1;
                            node->ant = NULL;
                            list->primeiro = node;
                            return list; 
                        }
                       else if(inicio!= list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            node->ant = aux_2;
                            node->prox = aux_1;
                            aux_1->ant = node;
                            aux_2->prox = node;
                            return list; 
                       }
                    }
                    inicio = inicio->prox;
                }
                else if(c == 'q'){
                    if((strcmp(getQuadraCep(inicio->elemento), id)) == 0){
                       if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_1->ant = node;
                            node->prox = aux_1;
                            node->ant = NULL;
                            list->primeiro = node;
                            return list; 
                        }
                       else if(inicio!= list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            node->ant = aux_2;
                            node->prox = aux_1;
                            aux_1->ant = node;
                            aux_2->prox = node;
                            return list; 
                       }
                    }
                    inicio = inicio->prox;
                }
                else if(c == 's'){
                    if((strcmp(getSemaforoId(inicio->elemento), id)) == 0){
                       if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_1->ant = node;
                            node->prox = aux_1;
                            node->ant = NULL;
                            list->primeiro = node;
                            return list; 
                        }
                       else if(inicio!= list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            node->ant = aux_2;
                            node->prox = aux_1;
                            aux_1->ant = node;
                            aux_2->prox = node;
                            return list; 
                       }
                    }
                    inicio = inicio->prox;
                }
            }
    }
    return NULL;
}

listaStruct insertAfterForma(listaStruct l, tipo elemento, int id, char c){
    if((getForma(id, l, c)) != NULL){
         Lista *list = (listaStruct)l;
    
         No* node = (No*)malloc(sizeof(No));
         node->elemento = elemento;
         
         No *inicio = list->primeiro;
         No *aux_1; 
         No *aux_2;

            while (inicio != NULL){
                if(c == 'c'){
                    if(getTextoId(node->elemento) == id){
                       if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_1->ant = node;
                            node->prox = aux_1;
                            node->ant = NULL;
                            list->primeiro = node;
                            return list; 
                        }
                       else if(inicio!= list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            node->ant = aux_2;
                            node->prox = aux_1;
                            aux_1->ant = node;
                            aux_2->prox = node;
                            return list; 
                       }
                    }
                    inicio = inicio->prox;
                }
                else if(c == 'l'){
                    if(getLinhaId(node->elemento) == id){
                       if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_1->ant = node;
                            node->prox = aux_1;
                            node->ant = NULL;
                            list->primeiro = node;
                            return list; 
                        }
                       else if(inicio!= list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            node->ant = aux_2;
                            node->prox = aux_1;
                            aux_1->ant = node;
                            aux_2->prox = node;
                            return list; 
                       }
                    }
                    inicio = inicio->prox;
                }
                else if(c == 'a'){
                    if(getRetanguloId(node->elemento) == id){
                       if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_1->ant = node;
                            node->prox = aux_1;
                            node->ant = NULL;
                            list->primeiro = node;
                            return list; 
                        }
                       else if(inicio!= list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            node->ant = aux_2;
                            node->prox = aux_1;
                            aux_1->ant = node;
                            aux_2->prox = node;
                            return list; 
                       }
                    }
                    inicio = inicio->prox;
                }
                else if(c == 't'){
                    if(getTextoId(node->elemento) == id){
                       if(inicio == list->primeiro){
                            aux_1 = inicio;
                            aux_1->ant = node;
                            node->prox = aux_1;
                            node->ant = NULL;
                            list->primeiro = node;
                            return list; 
                        }
                       else if(inicio!= list->primeiro){
                            aux_1 = inicio;
                            aux_2 = inicio->ant;
                            node->ant = aux_2;
                            node->prox = aux_1;
                            aux_1->ant = node;
                            aux_2->prox = node;
                            return list; 
                       }
                    }
                    inicio = inicio->prox;
                }
            }
    }
    return NULL;
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
listaStruct getNext(char *id, listaStruct l, char c){
    Lista *list = (Lista*)l;
    No *node = list->primeiro;
    No *aux;
        while (node != NULL){
            if(c == 'r'){
                 if((strcmp(getRadioId(node->elemento), id)) == 0){
                    aux = node->prox;
                    return aux->elemento;
                }
            }
            else if(c == 'h'){
                if((strcmp(getHidranteId(node->elemento), id)) == 0){
                    aux = node->prox;
                    return aux->elemento;
                }
            }
            else if(c == 'q'){
                 if((strcmp(getQuadraCep(node->elemento), id)) == 0){
                    aux = node->prox;
                    return aux->elemento;
                }
            }
            else if(c == 's'){
                if((strcmp(getSemaforoId(node->elemento), id)) == 0){
                    aux = node->prox;
                    return aux->elemento;
                }
            }
            node = node -> prox;
        }
    return NULL;
}

listaStruct getNextForma(int id, listaStruct l, char c){
    Lista *list = (Lista*)l;
    No *node = list->primeiro;
    No *aux;
        while (node != NULL){
            if(c == 'c'){
                if(getTextoId(node->elemento) == id){
                    aux = node->prox;
                    return aux->elemento;
                }
            }
            else if(c == 'l'){
                if(getLinhaId(node->elemento) == id){
                    aux = node->prox;
                    return aux->elemento;
                }
            }
            else if(c == 'a'){
                if(getRetanguloId(node->elemento) == id){
                    aux = node->prox;
                    return aux->elemento;
                }
            }
            else if(c == 't'){
                if(getTextoId(node->elemento) == id){
                    aux = node->prox;
                    return aux->elemento;
                }
            }
            node = node -> prox;
        }

    return NULL;

}

/*retorna o ultimo elemento da lista, se a lista estiver vazia, retorna null*/
listaStruct getLast(listaStruct l){
    Lista *list = (Lista*)l;
    No *node = list->ultimo;
        if(list->ultimo == NULL){
            return NULL;
        }
        
    return node->elemento;
}

/*retorna o elemento anterior a posicao inserida*/
listaStruct getPrevious(char *id, listaStruct l, char c){
    Lista *list = (Lista*)l;
    No *node = list->primeiro;
    No *aux;
        while (node != NULL){
           if(c == 'r'){
               if((strcmp(getRadioId(node->elemento), id)) == 0){
                    aux = node->ant;
                    return aux->elemento;
                }
            }
            else if(c == 'h'){
                if((strcmp(getHidranteId(node->elemento), id)) == 0){
                    aux = node->ant;
                    return aux->elemento;
                }
            }
            else if(c == 'q'){
                if((strcmp(getQuadraCep(node->elemento), id)) == 0){
                    aux = node->ant;
                    return aux->elemento;
                }
            }
            else if(c == 's'){
                if((strcmp(getSemaforoId(node->elemento), id)) == 0){
                    aux = node->ant;
                    return aux->elemento;
                }
            }
            
            node = node -> prox;
        }
    return NULL;
}

listaStruct getPreviousForma(int id, listaStruct l, char c){
    Lista *list = (Lista*)l;
    No *node = list->primeiro;
    No *aux;
        while (node != NULL){
            if(c == 'c'){
                if(getTextoId(node->elemento) == id){
                    aux = node->ant;
                    return aux->elemento;
                }
            }
            else if(c == 'l'){
                if(getLinhaId(node->elemento) == id){
                    aux = node->ant;
                    return aux->elemento;
                }
            }
            else if(c == 'a'){
                if(getRetanguloId(node->elemento) == id){
                    aux = node->ant;
                    return aux->elemento;
                }
            }
            else if(c == 't'){
                if(getTextoId(node->elemento) == id){
                    aux = node->ant;
                    return aux->elemento;
                }
            }
            node = node -> prox;
        }

    return NULL;
}