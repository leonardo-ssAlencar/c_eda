#include"ListaLinear.h"

struct sLista{
    int *valor;
    int tam;
    int pos;
};

sLista *initLista(int tamanho){
    sLista *lista = new sLista;
    lista->valor = new int[tamanho];
    lista->tam = tamanho;
    lista->pos = 0;

    return lista;

}

sLista *initLista(int tamanho, int qtdValores, int *valores){
    sLista *l;
    l = initLista(tamanho);

    for(int i = 0; i < qtdValores; i++){
        l->valor[l->pos++] = valores[i];
    }
    return l;
}

void destruirLista(sLista *lista){
    delete[] lista->valor;
    delete lista;
}


int tamanho(sLista *lista){
    return lista->tam;
}

int posicao(sLista *lista){
    return lista->pos;
}

int valor(sLista *lista, int indice){
    if(indice < 0 || indice >  lista->pos){
        return -1;
    }
    return lista->valor[indice];
}

void inserir(sLista *lista, int valor){
    lista->valor[lista->pos++] = valor;
}

void inserir(sLista *lista, int indice, int valor){
    if(indice < 0 || indice > lista->tam){
        return;
    }
    lista->valor[indice] = valor;
}

int buscar(sLista *lista, int valor){
    for(int i = 0; i < lista->tam; i++){
        if(lista->valor[i] == valor){
            return i;
        }
    }
    return -1;
}

int buscar(sLista *lista, algoritmoBusca func, int valor){
    return func(valor);
}

int remover(sLista *lista, int valor){
    int indice = buscar(lista,valor);

    if(indice < 0){
        return 0;
    }

    for(int i = indice; i < lista->pos; i++){
        lista->valor[i] = lista->valor[i+1];
    }

    lista->pos--;
    

    return 1;

}

