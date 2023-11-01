#include"Fila.h"
#include<stdlib.h>

struct sFila{
    int *vetor;
    int *finalVetor;
    int *inicio;
    int *fim;
};

int *proximoElemento(sFila*, int*);

sFila *initFila(int tam){

    sFila *f = (sFila*) malloc(sizeof(sFila));
    f->vetor = (int*) malloc(sizeof(int)*tam);

    f->inicio = f->vetor;
    f->fim = f->inicio;
    f->finalVetor = &f->vetor[tam];

    return f;
}

void destruirFila(sFila *fila){
    free(fila->vetor);
    free(fila);
}

void inserir(sFila *fila, int valor){

    if(cheia(fila)){
        return ;
    }

    int *proxIndice = proximoElemento(fila, fila->fim);

    *fila->fim = valor;

    if(proxIndice == fila->inicio){
        fila->fim = nullptr;
        return;
    }

    fila->fim = proxIndice;
}

int retirar(sFila *fila){
        
    if(vazia(fila)){
        return -1;
    }

    if(fila->fim == nullptr){
        fila->fim = fila->inicio;
    }
    
    int valor = *fila->inicio;
    
    fila->inicio = proximoElemento(fila, fila->inicio);
     
    return valor;

}

int *proximoElemento(sFila *fila, int *indice){
    int *proxIndice = (indice + 1);

    // Se o proximo valor estourar o array, eu retorno para o inicio do vetor
    if(proxIndice >= fila->finalVetor){
        proxIndice = fila->vetor;
    }

    return proxIndice;
}

int vazia(sFila* fila){
    return fila->inicio == fila->fim;
}
int cheia(sFila *fila){
    return fila->fim == nullptr;
}