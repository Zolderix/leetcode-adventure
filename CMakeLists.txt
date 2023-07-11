cmake_minimum_required(VERSION 3.15)

# Fix behavior of CMAKE_CXX_STANDARD when targeting macOS.
if (POLICY CMP0025)
    cmake_policy(SET CMP0025 NEW)
endif ()

project(leetCodeAdventure VERSION 1.0 LANGUAGES CXX)
option(PRIME_CALC_TESTING "Включить модульное тестирование" ON)
option(PRIME_CALC_COVERAGE "Включить измерение покрытия кода тестами" OFF)
add_compile_options(
        #        -Werror

        -Wall

        -std=c++20
)
if(NOT CMAKE_CXX_EXTENSIONS)
    set(CMAKE_CXX_EXTENSIONS OFF)
endif()

set(HEADERS
        #version.h #for example
        )

set(SOURCES
        main.cpp
        )
set(CMAKE_CXX_COMPILER_PREDEFINES_COMMAND -std=c++20)

add_executable(leetCodeAdventure ${HEADERS} ${SOURCES})

set_target_properties(leetCodeAdventure PROPERTIES
        CMAKE_CXX_STANDARD 20
        CMAKE_CXX_STANDARD_REQUIRED ON
        )