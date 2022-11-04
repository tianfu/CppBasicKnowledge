cmake_minimum_required(VERSION 3.22)
project(CppBasicKnowledge)

set(CMAKE_CXX_STANDARD 14)

add_executable(CppBasicKnowledge main.cpp advanced/FileStream.cpp)
add_executable(FileStream advanced/FileStream.cpp)