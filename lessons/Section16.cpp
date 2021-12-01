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

int contains_character( const char* str , unsigned int size , char c){

    for (unsigned int i = 0; i < size; ++i) {
        //if(str[i] == c){
        if(*(str+i) == c){
            return i;
        }

        std::cout << *(str+i) << " ";
    }
    return -1;
}

void find_character(const char* str, unsigned int size, char c){
    int index = contains_character(str,size,c);
    if(index != -1){
        std::cout << "Found character " << c << " at index " << index;
    }else{
        std::cout << "Could not find the character " << c << " in " << str;
    }
}

void Section16::section16() {

}

void Section16::many_result(int *array) {

}

void Section16::array_ref(double(&scores)[]) {

}


bool is_palindrome(unsigned long long int num)
{
    int digit;
    int remainder;
    unsigned long long int reversed=0;
    digit = num;
    while(digit>0)
    {
        remainder = digit%10;
        reversed = (reversed*10)+remainder;
        digit = digit/10;
    }
    if(reversed==num)
        return true;
    else
        return false;
}
