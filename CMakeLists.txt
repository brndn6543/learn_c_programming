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

add_executable(
        string_pointer
        src/string_pointer.c
)

# Main executable.
add_executable(
        learn_c_programming src/main.c
)
add_executable(struct_arg src/struct_arg.c)
add_executable(arithmetic_ops src/arithmetic_ops.c)
add_executable(comp_logic_and src/comp_logic_and.c)
add_executable(return_statement src/return_statement.c)
add_executable(avg_calc src/avg_calc.c)
add_executable(return-pointers src/return_pointers.c)
add_executable(pointer_struct_access src/pointer_struct_access.c)
add_executable(quot-rem src/quot-rem.c)
add_executable(ascii_char src/ascii_char.c)
add_executable(fibonacci src/fibonacci.c)
