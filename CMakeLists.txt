cmake_minimum_required(VERSION 3.16)
project(CS301_Bootcamp)

set(CMAKE_CXX_STANDARD 14)

include_directories(catch)

# Precompile catch2 to speed up re-compiles
add_library(catch2_main_DO_NOT_RUN STATIC catch/catch_main.cpp)
target_include_directories(catch2_main_DO_NOT_RUN PUBLIC catch/)

add_subdirectory("_IDE Hello World Test")
add_subdirectory("cin cout getline")
add_subdirectory("Types and Casting")
add_subdirectory("Strings")
add_subdirectory("Scope")
add_subdirectory("Functions")
add_subdirectory("Loops")
add_subdirectory("Arrays")
add_subdirectory("Classes")
add_subdirectory("File Reading and Writing")
add_subdirectory("Pointers")
add_subdirectory("Linked Lists")