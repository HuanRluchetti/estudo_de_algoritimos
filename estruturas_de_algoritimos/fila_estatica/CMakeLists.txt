cmake_minimum_required(VERSION 3.25)
project(filas C)

set(CMAKE_C_STANDARD 11)

include_directories(header)

add_executable(filas
        header/fila.c
        header/fila.h
        src/main.c)
