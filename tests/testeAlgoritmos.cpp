#include<gtest/gtest.h>

#include"ListaLinear.h"
#include"busca.h"

class ListaMock : public testing::Test {
 protected:
  void SetUp() override {
    
    int valor[] = {1,2,3,4,5,6,7,8,9,10};

    lista = initLista(10,10,valor);
     
     
  }
  sLista *lista;

};

TEST_F(ListaMock, buscaOrdenada){

    EXPECT_EQ(buscaOrdenada(lista, 3), 2) << "Esperado o indice 2";
    EXPECT_EQ(buscaOrdenada(lista, 10), 9) << "Esperado o indice 9";
    EXPECT_EQ(buscaOrdenada(lista, 11), -1) << "Elemento não encontrado, assim retorna -1";

    removerDoIndice(lista, 0);

    EXPECT_EQ(buscaOrdenada(lista, 3), 1) << "Esperado o indice 2";
    EXPECT_EQ(buscaOrdenada(lista, 10), 8) << "Esperado o indice 9";
    EXPECT_EQ(buscaOrdenada(lista, 11), -1) << "Elemento não encontrado, assim retorna -1";
}

TEST_F(ListaMock, buscaBinaria){

    EXPECT_EQ(buscaBinaria(lista, 3), 2) << "Esperado o indice 2";
    EXPECT_EQ(buscaBinaria(lista, 10), 9) << "Esperado o indice 9";
    EXPECT_EQ(buscaBinaria(lista, 11), -1) << "Elemento não encontrado, assim retorna -1";
    EXPECT_EQ(buscaBinaria(lista, 5), 4);

    removerDoIndice(lista, 0);

    EXPECT_EQ(buscaBinaria(lista, 3), 1) << "Esperado o indice 2";
    EXPECT_EQ(buscaBinaria(lista, 10), 8) << "Esperado o indice 9";
    EXPECT_EQ(buscaBinaria(lista, 11), -1) << "Elemento não encontrado, assim retorna -1";
    EXPECT_EQ(buscaBinaria(lista, 5), 3);
}







