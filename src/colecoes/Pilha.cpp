#include"Pilha.h"
#include<stdlib.h>


struct sPilha{
    int *vetor;
    int tamanho;
    int topo;
};

sPilha *initPilha(int tam){

    sPilha *p = (sPilha*) malloc(sizeof(sPilha));
    p->vetor = (int*) malloc(tam*sizeof(int));

    p->topo = -1;
    p->tamanho = tam;

    return p;
}

void destroiPilha(sPilha *pilha){
    free(pilha->vetor);
    free(pilha);
}

void empilhar(sPilha *pilha, int valor){

    if((pilha->topo+1) >= pilha->tamanho){
        return;
    }
    
    pilha->topo++;
    pilha->vetor[pilha->topo] = valor;   
}

int desempilhar(sPilha *pilha){
    int valor;

    if(pilha->topo == -1){
        return -1;
    }

    return pilha->vetor[pilha->topo--];
}

int vazia(sPilha* pilha){
    return pilha->topo == -1;

}

