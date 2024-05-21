cmake_minimum_required(VERSION 3.28)
project(fila_do_banco C)

set(CMAKE_C_STANDARD 11)

add_executable(fila_do_banco main.c
        queue.c
        queue.h)
