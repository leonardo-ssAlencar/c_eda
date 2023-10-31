#include<gtest/gtest.h>
#include"ListaLinear.h"

TEST(basicoLista, iniciarListaSimples){
    int tamLista = 10;
    sLista *lista = initLista(tamLista);

    EXPECT_EQ(tamanho(lista), tamLista) << "Tamanho da lista incorreto";
    EXPECT_EQ(posicao(lista), 0) << "Posição inicial não atualizada";

    destruirLista(lista);
}

TEST(basicoLista, iniciarListaComElementos){

    int valores[] = {1,2,3,4,5,6,7};
    int tamValores = 7;
    int tamLista = 10;

    sLista *lista = initLista(tamLista, tamValores, valores);

    EXPECT_EQ(tamanho(lista), tamLista) << "Tamanho da lista incorreto";
    EXPECT_EQ(posicao(lista), tamValores) << "Posição inicial não atualizada";

    for(int i = 0; i < posicao(lista); i++)
    {
        EXPECT_EQ(valor(lista,i), valores[i]);
    }

}

TEST(basicoLista, inserirValor){
    int tam = 3;
    sLista *lista = initLista(tam);

    int valor1 = 10;
    inserir(lista, valor1);

    EXPECT_EQ(valor(lista,0), valor1);

    int valor2 = 20;
    inserir(lista, valor2);
    EXPECT_EQ(valor(lista,1), valor2);

    int valor3 = 30;
    inserir(lista, valor3);
    EXPECT_EQ(valor(lista,2), valor3);

    int valores[] = {10,20,30,40};

    inserir(lista, 40);
    EXPECT_EQ(tamanho(lista),tam*2);

    int valor4 = 25;
    
    inserirNoIndice(lista,valor4, 2);

    for(int i = 0; i < posicao(lista); i++){
        EXPECT_EQ(valor(lista,i), valores[i]);
    }
}



TEST(basicoLista, buscarIndice){
    int tam = 10;
    int valores[] = {1,2,3,4,5,6,7,8};
    int qtdVal = 8;
    sLista *lista = initLista(tam, qtdVal, valores);

    ASSERT_EQ(tamanho(lista), 10) << "Lista não inicializada";

    EXPECT_EQ(buscar(lista, 6), 5) << "Não foi o indice esperado";
    EXPECT_EQ(buscar(lista, 1), 0) << "Não foi o indice esperado";

    EXPECT_EQ(buscar(lista,10), -1) << "Não é para existir esse elemento";
}

TEST(basicoLista, removerElemento){
    int tam = 10;
    int valores[] = {1,2,3,4,5,6,7,8};
    int qtdVal = 8;
    sLista *lista = initLista(tam, qtdVal, valores);

    remover(lista, 3);

    int valores2[] = {1,2,4,5,6,7,8};
    qtdVal--;

    for(int i = 0; i < posicao(lista); i++){
        EXPECT_EQ(valor(lista, i), valores2[i]);
    }

    remover(lista,2);
    qtdVal--;
    remover(lista,6);
    qtdVal--;

    int valores3[] = {4,5,7,8};

    removerDoIndice(lista,0);

    for(int i = 0; i < posicao(lista); i++){
        EXPECT_EQ(valor(lista, i), valores3[i]);
    }


    EXPECT_EQ(remover(lista,10), 0);
}