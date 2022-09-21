cmake_minimum_required(VERSION 3.00)
project(project_name C)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pthread -lm")
file(GLOB MAIN
        "SOURCE_FILES/*.c"
    )
    add_executable(executable ${MAIN})
