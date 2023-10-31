#ifndef PILHA_H
#define PILHA_H

typedef struct sPilha sPilha;

sPilha *initPilha(int);
void destroiPilha(sPilha*);
void empilhar(sPilha*, int);
int desempilhar(sPilha*);
int vazia(sPilha*);

#endif

