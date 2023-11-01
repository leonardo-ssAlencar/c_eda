#ifndef FILA_H
#define FILA_H

typedef struct sFila sFila;

sFila *initFila(int);
void destruirFila(sFila*);
void inserir(sFila*, int);
int retirar(sFila*);
int vazia(sFila*);
int cheia(sFila*);


#endif