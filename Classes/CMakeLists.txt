cmake_minimum_required(VERSION 3.16)
project(CS301-Bootcamp)

set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v3.6.0
)
FetchContent_MakeAvailable(Catch2)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY .)

# Example Mains
add_executable(Classes_Ex_Employee_Pay Classes_Ex_Employee_Pay.cpp)

# Unit Tests
add_executable(Classes_Tests unit_tests/ClassTests.cpp Deck.cpp Deck.h)

# Link the Catch2 library to the executable
target_link_libraries(Classes_Tests Catch2::Catch2WithMain)

# Main files
add_executable(Basic_Deck_Tester Basic_Deck_Tester.cpp Deck.cpp Deck.h)