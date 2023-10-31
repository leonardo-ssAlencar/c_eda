cmake_minimum_required(VERSION 3.20)


set(test_sources testesLista.cpp testeAlgoritmos.cpp testePilha.cpp testeFila.cpp)


include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)



enable_testing()
add_executable(testes ${test_sources})
target_link_libraries(
  testes
  GTest::gtest_main colecao algoritmos
)


include(GoogleTest)
gtest_discover_tests(testes)