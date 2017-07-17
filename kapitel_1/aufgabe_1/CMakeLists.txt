cmake_minimum_required(VERSION 3.6)
project(kapitel_1_aufgabe_1)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

add_executable(kapitel_1_aufgabe_1 ${SOURCE_FILES} main.cpp)