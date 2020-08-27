#ifndef LISTAS_H_
#define LISTAS_H_

typedef void* listaStruct;
typedef void* tipo;


/*inicia a lista*/
void criaLista();

/*retorna o numero de elementos da lista*/
void tamanhoLista();

/*Imprime a lista completamente*/
void imprimeLista();

/*libera a lista completamente*/
void liberaLista();

/*insere um elemento no final da lista*/
void insereElemento(listaStruct, void*);

/*remove um elemento na listaStruct*/
void removeElemento(listaStruct, void*, int);

/*retorna o valor do elemento, caso ele exista*/
void getElemento();

/*insere um elemento antes da posicao indicada e retorna o indicador para esse elemento, caso a posição indicada exista*/
void insertBefore();

/*insere um elemento depois da posicao indicada e retorna o indicador para esse elemento, caso a posição indicada exista*/
void insertAfter();

/*retorna o primeiro elemento da lista, se a lista estiver vazia retorna null*/
void getFirst();

/*retorna o elemento posterior a posicao inserida*/
void getNext();

/*retorna o ultimo elemento da lista, se a lista estiver vazia, retorna null*/
void getLast();

/*retorna o elemento anterior a posicao inserida*/
void getPrevious();

#endif