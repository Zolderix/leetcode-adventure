cmake_minimum_required(VERSION 3.18)

# Fix behavior of CMAKE_CXX_STANDARD when targeting macOS.
if (POLICY CMP0025)
    cmake_policy(SET CMP0025 NEW)
endif ()


set(CMAKE_GENERATOR Ninja)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_CXX_COMPILER_PREDEFINES_COMMAND -std=c++20)
#set(CMAKE_BUILD_DIR _out)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/_out)

project(leetCodeAdventure VERSION 1.0 LANGUAGES CXX)

include_directories(
    solutions
    solutions/base
    solutions/ContainsDuplicate
)

set(HEADERS
    solutions/ContainsDuplicate/ContainsDuplicate.hpp
    solutions/base/Solution.hpp
)

set(SOURCES
    main.cpp
    solutions/ContainsDuplicate/ContainsDuplicate.cpp
)

add_executable(leetCodeAdventure ${SOURCES} ${HEADERS})
