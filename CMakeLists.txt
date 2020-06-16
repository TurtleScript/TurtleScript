cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 11)

project (TurtleScript)

add_subdirectory(
    ${CMAKE_SOURCE_DIR}/parser
    ${CMAKE_SOURCE_DIR}/test
)

enable_testing ()
add_test(NAME tests COMMAND tests)

