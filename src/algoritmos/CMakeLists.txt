cmake_minimum_required(VERSION 3.20)

set(SOURCE_LIST BuscaSimples.cpp)

add_library(algoritmos STATIC ${SOURCE_LIST})
target_include_directories(algoritmos PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

