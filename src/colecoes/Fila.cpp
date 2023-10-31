#include"Fila.h"
#include<stdlib.h>

struct sFila{
    int *vetor;
    int tam;
    int inicio;
    int fim;
};


sFila *initFila(int tam){

    sFila *f = (sFila*) malloc(sizeof(sFila));
    f->vetor = (int*) malloc(sizeof(int)*tam);

    f->inicio = 0;
    f->fim = 0;
    f->tam = tam;
    return f;
}

void destruirFila(sFila *fila){
    free(fila->vetor);
    free(fila);
}

void inserir(sFila *fila, int valor){

}


int vazia(sFila* fila){
    
}

int retirar(sFila *fila){

    return 0;

}