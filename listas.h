#ifndef LISTAS_H_
#define LISTAS_H_

typedef void* listaStruct;
typedef void* tipo;


/*inicia a lista*/
listaStruct *criaLista();

/*retorna o numero de elementos da lista*/
listaStruct tamanhoLista();

/*Imprime a lista completamente*/
listaStruct imprimeLista();

/*libera a lista completamente*/
listaStruct liberaLista();

/*insere um elemento no final da lista*/
listaStruct insereElemento(Lista*, tipo);

/*remove um elemento na listaStruct*/
listaStruct removeElemento(Lista*, tipo, int);

/*retorna o valor do elemento, caso ele exista*/
listaStruct getElemento();

/*insere um elemento antes da posicao indicada e retorna o indicador para esse elemento, caso a posição indicada exista*/
listaStruct insertBefore();

/*insere um elemento depois da posicao indicada e retorna o indicador para esse elemento, caso a posição indicada exista*/
listaStruct insertAfter();

/*retorna o primeiro elemento da lista, se a lista estiver vazia retorna null*/
listaStruct getFirst();

/*retorna o elemento posterior a posicao inserida*/
listaStruct getNext();

/*retorna o ultimo elemento da lista, se a lista estiver vazia, retorna null*/
listaStruct getLast();

/*retorna o elemento anterior a posicao inserida*/
listaStruct getPrevious();

#endif