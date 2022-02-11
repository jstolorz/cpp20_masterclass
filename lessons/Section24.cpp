//
// Created by janusz on 23.12.2021.
//

#include "Section24.h"
#include <iostream>
#include <cstring>

template<typename T> T maximum(T a, T b){
    std::cout << "template<typename T> T maximum(T a, T b) \n";
    return (a>b) ? a : b;
}

const char* maximum(const char* a, const char* b){
    std::cout << "const char* maximum(const char* a, const char* b) \n";
    return (std::strcmp(a,b) > 0) ? a : b;
}

template<typename T> T* maximum(T* a, T* b){
    std::cout << "const char* maximum(const char* a, const char* b) \n";
    return (*a > *b) ? a : b;
}


void Section24::section() {



}
