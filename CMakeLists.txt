cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

project(EDALIB VERSION 1.0 LANGUAGES CXX)

# Biblioteca das coleções
add_subdirectory(src/colecoes)
add_subdirectory(src/algoritmos)
add_subdirectory(tests)


