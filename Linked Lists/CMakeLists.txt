cmake_minimum_required(VERSION 3.16)
project(CS301-Bootcamp)

#message(WARNING "The CMAKE_SOURCE_DIR is ${CMAKE_SOURCE_DIR}")
#message(WARNING "The CMAKE_CURRENT_SOURCE_DIR is ${CMAKE_CURRENT_SOURCE_DIR}")
#message(WARNING "catch source is ${CMAKE_SOURCE_DIR}/catch/catch_main.cpp")

set(CMAKE_CXX_STANDARD 14)
include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v3.6.0
)
FetchContent_MakeAvailable(Catch2)

# Mains
add_executable(LinkList_Exercise_1_and_2 Exercise_1_and_2_main.cpp)

# Unit Tests
add_executable(LinkList_Tests
        LinkListInt.cpp LinkListInt.h
        "unit_tests/link_list_tests.cpp")

# Link the Catch2 library to the executable
target_link_libraries(LinkList_Tests Catch2::Catch2WithMain)

add_executable(LinkList_Basic_Test
        LinkList_Basic_Tests.cpp LinkListInt.h LinkListInt.cpp )

# Example Mains
add_executable(LinkList_Examples link_list_examples.cpp FindPriorNode.cpp FindPriorNode.h DeleteNode.cpp DeleteNode.h LinkList_Basic_Tests.cpp)
add_executable(LinkListClass LinkListInt.cpp LinkListInt.h Exercise_3_main.cpp)

