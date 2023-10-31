#include<gtest/gtest.h>

#include"Pilha.h"


TEST(pilhaTeste, iniciarPilha){
    sPilha *pilha = initPilha(5);

    ASSERT_TRUE(vazia(pilha));
}

TEST(pilhaTeste, empilharDesempilhar){

    sPilha *pilha = initPilha(2);

    empilhar(pilha, 10);
    EXPECT_FALSE(vazia(pilha));
    empilhar(pilha, 20);
    empilhar(pilha, 30);
    empilhar(pilha, 40);
    empilhar(pilha, 50);


    EXPECT_EQ(desempilhar(pilha), 20);
    EXPECT_EQ(desempilhar(pilha), 10);
    EXPECT_EQ(desempilhar(pilha), -1);

    empilhar(pilha, 40);
    empilhar(pilha, 50);

    EXPECT_EQ(desempilhar(pilha), 50);
    EXPECT_EQ(desempilhar(pilha), 40);
    EXPECT_EQ(desempilhar(pilha), -1);

    ASSERT_TRUE(vazia(pilha));

}
