cmake_minimum_required(VERSION 3.22)
project(stack_linked_lists C)

set(CMAKE_C_STANDARD 99)

add_executable(stack_linked_lists main.c stack_ll.h stack_ll.c)
