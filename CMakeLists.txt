cmake_minimum_required(VERSION 3.8)
project(Yuki)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Ai.h Board.h BitGrid.h Line.h constant.h assist_code.h)
add_executable(Yuki ${SOURCE_FILES})