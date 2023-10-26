# <center> Biblioteca em C++ de estruturas de dados e algoritmos </center>

Uma simples biblioteca para se estudar estruturas de dados e algoritmos.

---

### Conteúdo: 

1. Introdução
2. Tecnologias
3. Build


## Introdução:

> [!WARNING]  
> Esse repositório é somente para estudo e pode conter código bizarro que eu pensei do nada e implementei (**Vou avisar nesses casos**). Nesses casos vou tentar explicar minha linha de pensamento, se eu me lembrar de escrever em algum lugar.


Estou devendo a mim mesmo um estudo mais aprofundado de estruturas de dados, desta forma aproveitarei para aprender Cmake, e TDD.

Não vou fazer em orientação a objetos pelo fato de não querer complicar muito o código com herança, polimorfismo e padrões de projeto, não é o foco aqui.

Vou colocar um pouco de teoria em cada pasta. E alguns comentários, provavelmente junto com Big O.



## Tecnologias:

- Cmake 3.20
- googleTest
- C++ (na build eu tô usando a versão 20)

## Build

Eu ainda não vi como deixar disponibilizar o projeto inteiro, mas já tá buildando algumas pastas então é só copiar a src e linkar no seu projeto CMake com **add_subdirectory()**, *provavelmente*.
