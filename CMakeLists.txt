cmake_minimum_required(VERSION 3.27)
project(CPlusPlus)

set(CMAKE_CXX_STANDARD 20)

add_executable(CPlusPlus
        main.cpp
        utils/greet.cpp
        Search/find.cpp
        Search/find.hpp
        Objects/Rectangle.cpp
        Objects/Rectangle.h
)
