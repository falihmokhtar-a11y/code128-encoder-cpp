cmake_minimum_required(VERSION 3.16)

project(code128-encoder-cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(code128-encoder
    mein.cpp
    Cd128Encoder.cpp
    Validator.cpp
)

target_include_directories(code128-encoder PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)