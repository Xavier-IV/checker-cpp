cmake_minimum_required(VERSION 3.15)
project(checker)

set(CMAKE_CXX_STANDARD 14)

add_executable(checker main.cpp headers/checker_board.h headers/checker_move.h headers/checker_input.h headers/checker_converter.h)