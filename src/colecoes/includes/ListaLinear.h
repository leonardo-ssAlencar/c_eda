#ifndef LISTA_H
#define LISTA_H

#include<stdlib.h>

typedef struct sLista sLista;
typedef int (*algoritmoBusca)(int);


sLista *initLista(int);
sLista *initLista(int, int, int*);
void destruirLista(sLista *lista);

int tamanho(sLista*);
int posicao(sLista*);

void inserir(sLista*, int); // insere no final da lista
void inserir(sLista*,int,int); // insere no indice especificado
int valor(sLista*,int); // retorna o valor do indice
int buscar(sLista*,int); // retorna o indice do valor

int buscar(sLista*, algoritmoBusca, int);
int remover(sLista*,int);


#endif