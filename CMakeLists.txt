cmake_minimum_required(VERSION 3.20)
project(cpp20_masterclass)

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME} main.cpp lessons/section30.h lessons/section30.cpp)


find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${PYTHON_LIBRARIES})