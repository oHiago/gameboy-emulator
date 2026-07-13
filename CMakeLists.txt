cmake_minimum_required(VERSION 3.31.11)
project(Emu)

add_executable(emu main.cpp)
target_include_directories(emu PRIVATE include)

