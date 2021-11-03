cmake_minimum_required(VERSION 3.20)
project(registroPersonale C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(header)
include_directories(src)

add_executable(registroPersonale
        header/main.h)
