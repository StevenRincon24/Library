cmake_minimum_required(VERSION 3.17)
project(Libreria)

set(CMAKE_CXX_STANDARD 20)

add_executable(Libreria main.cpp Author.h Book.h Author.cpp Book.cpp main.cpp ServiceLibrary.cpp ServiceLibrary.h)