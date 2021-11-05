//
// Created by jstol on 04.11.2021.
//

#include "Section7.h"

void Section7::section7() {

    double price{45.65};
    int units {10};

    auto total = price * units;

    std::cout << total << std::endl;
    std::cout << sizeof(total) << std::endl;

    double x {12.5};
    double y {34.7};


    int sum = static_cast<int>(x) + static_cast<int>(y);
    int sum2 = static_cast<int>(x+y);

    std::cout << sum << std::endl;
    std::cout << sum2 << std::endl;

    unsigned char data {250};



    std::cout << "Overflow" << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    unsigned char data2 {2};

    std::cout << "Underflow" << std::endl;

    --data2;
    std::cout << "data : " << static_cast<int>(data2) << std::endl;

    --data2;
    std::cout << "data : " << static_cast<int>(data2) << std::endl;

    --data2;
    std::cout << "data : " << static_cast<int>(data2) << std::endl;

    --data2;
    std::cout << "data : " << static_cast<int>(data2) << std::endl;

    --data2;
    std::cout << "data : " << static_cast<int>(data2) << std::endl;

}
