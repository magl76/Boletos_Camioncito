cmake_minimum_required(VERSION 3.17)
project(Boletos_Camioncito)

set(CMAKE_CXX_STANDARD 20)

include_directories(/home/alexandergl76/Documentos/Boletos_Camioncito)
link_directories(/home/alexandergl76/Documentos/Boletos_Camioncito/cmake-build-debug)

add_executable(Boletos_Camioncito main.cpp)
target_link_libraries(Boletos_Camioncito libBoletos_Camioncito.so)