#include<gtest/gtest.h>
#include"Fila.h"


TEST(filaTeste, verificaVazia){
    sFila *fila = initFila(10);
    EXPECT_TRUE(vazia(fila));
}

TEST(filaTeste, inserirEretirar){

    sFila *fila = initFila(3);
    
    inserir(fila, 10);
    inserir(fila, 20);
    inserir(fila, 30);

    EXPECT_TRUE(cheia(fila));

    EXPECT_EQ(retirar(fila),10);
    EXPECT_EQ(retirar(fila),20);
    EXPECT_EQ(retirar(fila),30);
    EXPECT_EQ(retirar(fila), -1);
    EXPECT_TRUE(vazia(fila));

    inserir(fila, 10);
    inserir(fila, 20);
    inserir(fila, 30);

    EXPECT_TRUE(cheia(fila));

    EXPECT_EQ(retirar(fila), 10);
    inserir(fila,40);

    EXPECT_EQ(retirar(fila),20);
    EXPECT_EQ(retirar(fila),30);
    EXPECT_EQ(retirar(fila),40);

    EXPECT_TRUE(vazia(fila));
    







}