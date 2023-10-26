cmake_minimum_required(VERSION 3.10)

set(SOURCE_LIST Lista.cpp)

add_library(colecao STATIC ${SOURCE_LIST})
target_include_directories(colecao PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/includes)
target_link_libraries(colecao PRIVATE algoritmos)
