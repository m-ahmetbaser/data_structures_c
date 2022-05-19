cmake_minimum_required(VERSION 3.22)
project(stack_arr C)

set(CMAKE_C_STANDARD 99)

add_executable(stack_arr main.c parametric_stack.h parametric_stack.c)
