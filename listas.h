#ifndef LISTAS_H_
#define LISTAS_H_

/*referencias usadas para char de identificação:
    c = circulo;
    l = linha;
    a = retangulo;
    t = texto;
    h = hidrante;
    q = quadra;
    r = radio;
    s = semaforo;
*/

typedef void* listaStruct;
typedef void* tipo;

/*inicia a lista*/
listaStruct *criaLista();

/*retorna o numero de elementos da lista*/
int tamanhoLista(listaStruct);

/*Imprime a lista completamente*/
listaStruct imprimeLista(listaStruct, char);

/*libera a lista completamente*/
listaStruct liberaLista(listaStruct);

/*insere um elemento no final da lista*/
listaStruct insereElemento(listaStruct, tipo);

/*remove um elemento na listaStruct*/
listaStruct removeElemento(listaStruct, tipo, int);

/*retorna o valor do elemento, caso ele exista*/
listaStruct getElemento();

/*insere um elemento antes da posicao indicada e retorna o indicador para esse elemento, 
caso a posição indicada exista*/
listaStruct insertBefore(listaStruct, tipo, int, char);

/*insere um elemento depois da posicao indicada e retorna o indicador para esse elemento,
 caso a posição indicada exista*/
listaStruct insertAfter();

/*retorna o primeiro elemento da lista, se a lista estiver vazia retorna null*/
listaStruct getFirst(listaStruct);

/*retorna o elemento posterior a posicao inserida*/
listaStruct getNext(int, listaStruct, char);

/*retorna o ultimo elemento da lista, se a lista estiver vazia, retorna null*/
listaStruct getLast(listaStruct);

/*retorna o elemento anterior a posicao inserida*/
listaStruct getPrevious(int, listaStruct, char);

#endif