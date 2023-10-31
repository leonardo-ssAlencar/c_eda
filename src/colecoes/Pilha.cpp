#include"Pilha.h"
#include<stdlib.h>

/**
 * @brief Estrutura da pilha
 */
struct sPilha{
    int *vetor;
    int *fimDaPilha;
    int *topo;
};
/**
 * @brief Inicializa a pilha
 * 
 * @param tam quantidade de elementos da pilha
 * @return sPilha* pilha vazia
 */
sPilha *initPilha(int tam){

    // Aloca espaço de memoria para a pilha
    sPilha *p = (sPilha*) malloc(sizeof(sPilha));
    // Aloca espaço de memoria para os elementos da pilha
    p->vetor = (int*) malloc(tam*sizeof(int));

    // inicializa o fim da pilha no ultimo endereço da pilha
    p->fimDaPilha = &p->vetor[tam];
    // Inicializa o topo
    p->topo = nullptr;

    return p;
}

void destroiPilha(sPilha *pilha){
    free(pilha->vetor);
    free(pilha);
}

void empilhar(sPilha *pilha, int valor){

    int *proxElemento;
    
    if(pilha->topo == nullptr){
        pilha->topo = pilha->vetor;
        proxElemento = pilha->topo;
    }
    else{
        proxElemento = (pilha->topo + 1);
    }

    if( proxElemento == pilha->fimDaPilha){
        return;
    }


    *proxElemento = valor;
    pilha->topo = proxElemento;
    
}

int desempilhar(sPilha *pilha){
    int valor;

    if(pilha->topo == nullptr){
        return -1;
    }
    valor = *pilha->topo;

    if(pilha->topo == pilha->vetor){
        pilha->topo = nullptr;
        return valor;
    }

    pilha->topo = (pilha->topo - 1);
    
    return valor;
}

int vazia(sPilha* pilha){
    return pilha->topo == nullptr;

}

