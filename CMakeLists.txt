cmake_minimum_required(VERSION 3.16)

project(NebulaGameEngine)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE ENGINE_SOURCES
    Engine/*.cpp
)

add_executable(Nebula
    Main.cpp
    ${ENGINE_SOURCES}
)

target_include_directories(Nebula PRIVATE
    Engine
)

find_package(SDL2 REQUIRED)

target_link_libraries(Nebula PRIVATE
    SDL2
)

if(APPLE)
    find_library(COCOA_LIBRARY Cocoa)
    find_library(OpenGL_LIBRARY OpenGL)

    target_link_libraries(Nebula PRIVATE
        ${COCOA_LIBRARY}
        ${OpenGL_LIBRARY}
    )
endif()
