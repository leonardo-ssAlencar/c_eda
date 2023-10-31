#ifndef LISTA_H
#define LISTA_H

#include<stdlib.h>
typedef struct sLista sLista;

/**
 * @brief Cria uma lista com um tamanho
 * 
 *  
 * @return sLista* 
 */
sLista *initLista(int);
/**
 * @brief Cria uma lista com os elementos do vetor valores
 * 
 * @return sLista* 
 */
sLista *initLista(int, int, int*);

/**
 * @brief Destroi a lista
 * 
 * @param lista 
 */
void destruirLista(sLista *lista);

/**
 * @brief O tamanho maximo
 * 
 * @return int 
 */
int tamanho(sLista*);
/**
 * @brief A quantidade de elementos que estão na lista
 * 
 * @return int 
 */
int posicao(sLista*);
/**
 * @brief Insere o elemento no final da lista 
 */
void inserir(sLista*, int);
/**
 * @brief Insere o elemento no indice especificado
 * 
 */
void inserirNoIndice(sLista*,int,int); // insere no indice especificado
/**
 * @brief retorna o valor que está na posição especificada
 * 
 * @return int 
 */
int valor(sLista*,int);
/**
 * @brief Busca um valor dentro da lista
 * 
 * @return int 
 */
int buscar(sLista*,int);
/**
 * @brief Remove o elemento da lista
 * 
 * @return 0 se o elemento não estiver na lista, 1 se o elemento estiver na lista
 */
int remover(sLista*,int);
/**
 * @brief Remove o elemento do indice especificado
 * 
 * @return 0 se o elemento não estiver na lista, 1 se o elemento estiver na lista
 */
int removerDoIndice(sLista*, int);


#endif