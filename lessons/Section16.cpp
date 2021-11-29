//
// Created by jstol on 29.11.2021.
//

#include "Section16.h"

unsigned int digit_sum(unsigned int forsum){
    unsigned int sum{};
    int dig = forsum;
    bool flag = true;

    while(flag){
        sum += dig % 10;
        dig = dig / 10;
        if(dig < 10){
           sum += dig;
           flag = false;
        }
    }

    return sum;
}

void show_odd(unsigned long long int value){

    unsigned long long int number = value;
    while(number > 0){
        if((number % 10) % 2 != 0){
            std::cout << (number % 10);
        }
        number = number / 10;
    }
}


void Section16::section16() {

    show_odd(98723713);

}

void Section16::many_result(int *) {

}
