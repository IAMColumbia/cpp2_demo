cmake_minimum_required(VERSION 3.9.2)

project(Demo)


include_directories(.)
include(gtest.cmake)

find_package(Threads)

set(UNIT_TESTS test/test.cpp)
set(MAIN_FILE src/main.cpp)



add_executable(demo ${MAIN_FILE} src/fib.cpp)

add_executable(demo-test ${UNIT_TESTS} src/fib.cpp)
target_link_libraries(demo-test gtest ${CMAKE_THREAD_LIBS_INIT})
