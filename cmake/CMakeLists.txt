cmake_minimum_required(VERSION 3.27 FATAL_ERROR)
project(my_cpp_lazy_sample LANGUAGES CXX DESCRIPTION "My C++ Lazy Sample")

set(CMAKE_CXX_STANDARD 23)

set(CPP_SRCDIR ${CMAKE_CURRENT_SOURCE_DIR}/../src)
set(CPP_INCDIR ${CMAKE_CURRENT_SOURCE_DIR}/../include)

add_library(lazy INTERFACE)
target_include_directories(lazy INTERFACE ${CPP_INCDIR})

add_executable(my_cpp_lazy_sample ${CPP_SRCDIR}/main.cc)
target_link_libraries(my_cpp_lazy_sample PRIVATE lazy)
