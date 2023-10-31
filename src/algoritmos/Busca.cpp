#include"busca.h"
#include"ListaLinear.h"

int buscaBinariaRecursiva(sLista*, int, int, int);

int buscaOrdenada(sLista *lista, int elemento){

    int i = 0;
    
    for(i = 0; valor(lista, i) < elemento; i++);

    if(valor(lista,i) == elemento){
        return i;
    }

    return -1;
    
}

int buscaBinaria(sLista *lista, int elemento){
    return buscaBinariaRecursiva(lista, elemento, 0, posicao(lista));
}

int buscaBinariaRecursiva(sLista *lista, int elemento, int inicio, int fim){

        int meio = (int)ceil((fim - inicio)/2) + inicio;
        int valLista = valor(lista,meio);

        
   
        if(elemento <= valLista ){
            if(valLista == elemento){
                return meio;
            }
            
            return buscaBinariaRecursiva(lista, elemento, inicio, meio);
        }

        if((fim - inicio) > 1){
            return buscaBinariaRecursiva(lista, elemento, meio, fim);
        }
        return -1;


        
        
}


