cmake_minimum_required(VERSION 3.26)
project(Pet_Shelter)

set(CMAKE_CXX_STANDARD 17)

add_executable(Pet_Shelter main.cpp
        Pet.h
        Pet.cpp
        Helper.h
        Helper.cpp)
