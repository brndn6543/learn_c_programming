cmake_minimum_required(VERSION 3.31)
project(learn_c_programming C)

set(CMAKE_C_STANDARD          11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Headers
include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(
        assign_val_char
        src/assign_val_char.c
        src/function_return_pointer.c
)

add_executable(
        compare_ints
        src/compare_ints.c
)

add_executable(
        function_print
        src/function_print.c
)

add_executable(
        search_element
        src/search_element.c
)

# Main executable.
add_executable(
        learn_c_programming src/main.c
)
add_executable(function_return_pointer src/function_return_pointer.c)
