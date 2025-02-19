cmake_minimum_required(VERSION 3.21)
project(c_demo C)

set(CMAKE_C_STANDARD 99)

add_executable(c_demo main.c 01_day/hello.c 01_day/function_demo.h 02_day/test.c 02_day/IoTest.c 03_day/array_demo.c)

add_executable(test 02_day/test.c)
add_executable(hello 01_day/hello.c)
add_executable(IoTest 02_day/IoTest.c)
add_executable(array_demo 03_day/array_demo.c 03_day/array_find.h 04_day/array_exer.c 04_day/array_exr2.c 04_day/pointer.c)
add_executable(array_exer 04_day/array_exer.c)
add_executable(array_exr2 04_day/array_exr2.c)
add_executable(pointer 04_day/pointer.c)