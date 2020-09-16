cmake_minimum_required (VERSION 2.8)

project (CComplexVector)

set (VECTOR_SRC src/main.cpp src/CComplexVector.cpp src/test.cpp)
set (VECTOR_HDR include/CComplexVector.hpp include/test.hpp)

add_executable(${PROJECT_NAME} ${VECTOR_SRC} ${VECTOR_HDR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
