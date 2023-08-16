cmake_minimum_required(VERSION 3.1.0)
project(shadow)

set(CMAKE_CXX_STANDARD 11)

set(SRC_DIRECTORY src) 

set(SOURCES
 
)

add_executable(${PROJECT_NAME}
    ${SRC_DIRECTORY}/main.cpp
    ${SOURCES}
)

target_link_libraries(${PROJECT_NAME}
    sfml-system
    sfml-window
    sfml-graphics
    sfml-audio
)
