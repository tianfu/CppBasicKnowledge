cmake_minimum_required(VERSION 3.22)
project(CppBasicKnowledge)

set(CMAKE_CXX_STANDARD 14)

add_executable(CppBasicKnowledge main.cpp advanced/FileStream.cpp advanced/Namespace.cpp advanced/Genericity.cpp advanced/Struct.cpp)
add_executable(FileStream advanced/FileStream.cpp)
add_executable(main main.cpp)
add_executable(Namespace advanced/Namespace.cpp)
add_executable(Genericity advanced/Genericity.cpp)
add_executable(Struct advanced/Struct.cpp)