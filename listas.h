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
listaStruct criaLista();

/*retorna o numero de elementos da lista*/
int tamanhoLista(listaStruct);

/*Imprime a lista completamente*/
void imprimeLista(listaStruct, char);

/*libera a lista completamente*/
void liberaLista(listaStruct);

/*insere um elemento no final da lista*/
listaStruct insereElemento(listaStruct, tipo);

/*remove um elemento na listaStruct*/
listaStruct removeElemento(listaStruct, char*, char);

/*remove uma forma na listaStruct*/
listaStruct removeForma(listaStruct, int, char);

/*retorna o valor do elemento, caso ele exista*/
listaStruct getElemento(char*, listaStruct, char);

/*retorna o valor da forma, caso ele exista*/
listaStruct getForma(int, listaStruct, char);

/*insere um elemento antes da posicao indicada e retorna o indicador para esse elemento, 
caso a posição indicada exista*/
listaStruct insertBefore(listaStruct, tipo, char*, char);

/*insere uma forma antes da posicao indicada e retorna o indicador para essa forma, 
caso a posição indicada exista*/
listaStruct insertBeforeElemento(listaStruct, tipo, int, char);

/*insere um elemento depois da posicao indicada e retorna o indicador para esse elemento,
 caso a posição indicada exista*/
listaStruct insertAfter(listaStruct, tipo, char *, char);

/*insere uma forma depois da posicao indicada e retorna o indicador para essa forma,
 caso a posição indicada exista*/
listaStruct insertAfterForma(listaStruct, tipo, int, char);

/*retorna o primeiro elemento da lista, se a lista estiver vazia retorna null*/
listaStruct getFirst(listaStruct);

/*retorna o elemento posterior a posicao inserida*/
listaStruct getNext(char*, listaStruct, char);

/*retorna a forma posterior a posicao inserida*/
listaStruct getNextForma(int, listaStruct, char);

/*retorna o ultimo elemento da lista, se a lista estiver vazia, retorna null*/
listaStruct getLast(listaStruct);

/*retorna o elemento anterior a posicao inserida*/
listaStruct getPrevious(char*, listaStruct, char);

/*retorna a forma anterior a posicao inserida*/
listaStruct getPreviousForma(int, listaStruct, char);

#endif