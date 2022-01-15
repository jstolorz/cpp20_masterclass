cmake_minimum_required(VERSION 3.20)
project(cpp20_masterclass)

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME} main.cpp lessons/Section6.cpp lessons/Section6.h lessons/Section7.cpp lessons/Section7.h lessons/Section8.cpp lessons/Section8.h lessons/Section9.cpp lessons/Section9.h lessons/Section10.cpp lessons/Section10.h cppoop/YouTubeChannel.cpp cppoop/YouTubeChannel.h lessons/Section11.cpp lessons/Section11.h lessons/Calendar.cpp lessons/Calendar.h lessons/Section12.cpp lessons/Section12.h lessons/Calculator.cpp lessons/Calculator.h lessons/Section13.cpp lessons/Section13.h lessons/Metaprograming.cpp lessons/Metaprograming.h lessons/Lambdaex.cpp lessons/Lambdaex.h lessons/Section15.cpp lessons/Section15.h lessons/Section16.cpp lessons/Section16.h lessons/Section17.cpp lessons/Section17.h lessons/Section19.cpp lessons/Section19.h lessons/Section24.cpp lessons/Section24.h lessons/section26.h)


find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${PYTHON_LIBRARIES})