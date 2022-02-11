//
// Created by jstol on 21.12.2021.
//

#include "Section24.h"


template<typename T>
T maximum(T a, T b){
    return (a > b) ? a : b;
}


void Section24::section24() {

    int a{2};
    int b{3};


    double da{2.44};
    double db{4.66};

    std::cout << maximum(a,b) << std::endl;
    std::cout << maximum(da,db) << std::endl;

}
