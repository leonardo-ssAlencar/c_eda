#include"ListaLinear.h"


struct sLista{
    int *valor;
    int tam;
    int pos;
};

void estenderLista(sLista *);
void realocarListaEsq(sLista*, int);
void realocarListaDir(sLista*, int);

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
    if(lista->pos == lista->tam){
        estenderLista(lista);
    }
    lista->valor[lista->pos++] = valor;
}

void estenderLista(sLista *lista){
    int *valores = new int[lista->tam*2];

    

    for(int i = 0; i < lista->tam; i++){
        valores[i] = lista->valor[i];

    }
    int *temp = lista->valor;

    lista->valor = valores;
    lista->tam*=2;

    delete[] temp;
}

void inserirNoIndice(sLista *lista, int indice, int valor){
    if(indice < 0 || indice > lista->tam){
        return;
    }
    
    realocarListaDir(lista,indice);
    lista->valor[indice] = valor;
    lista->pos++;
}

int buscar(sLista *lista, int valor)
{
    for(int i = 0; i < lista->tam; i++)
    {
        if(lista->valor[i] == valor)
        {
           return i;
        }
    }
    return -1;
}

int remover(sLista *lista, int valor){
    int indice = buscar(lista,valor);

    if(indice < 0){
        return 0;
    }

    realocarListaEsq(lista,indice);
    
    lista->pos--;
    

    return 1;
}

int removerDoIndice(sLista *lista, int indice){
    if(indice > lista->pos && indice > 0){
        return 0;
    }

    realocarListaEsq(lista,indice);

    lista->pos--;
    
    return 1;
    
}

void realocarListaEsq(sLista* lista, int indice){

    for(int i = indice; i < lista->pos; i++){
        lista->valor[i] = lista->valor[i+1];
    }
}


void realocarListaDir(sLista *lista, int indice){
    for(int i = lista->pos; i > indice; i--){
        lista->valor[i] = lista->valor[i-1];
    }
}

