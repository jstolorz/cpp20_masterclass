#ifndef CPP20_MASTERCLASS_SECTION8_H
#define CPP20_MASTERCLASS_SECTION8_H

#include <iostream>
#include <bitset>
#include <iomanip>



class Section8 {
public:

    // mask
    static const unsigned char mask_bit_0 {0b00000001};
    static const unsigned char mask_bit_1 {0b00000010};
    static const unsigned char mask_bit_2 {0b00000100};
    static const unsigned char mask_bit_3 {0b00001000};
    static const unsigned char mask_bit_4 {0b00010000};
    static const unsigned char mask_bit_5 {0b00100000};
    static const unsigned char mask_bit_6 {0b01000000};
    static const unsigned char mask_bit_7 {0b10000000};

    static void section8();
    static void use_options_v0(bool flag0,bool flag1,bool flag2,bool flag3,bool flag4,bool flag5,bool flag6,bool flag7);
    static void use_options_v1(unsigned char flags);
};


#endif //CPP20_MASTERCLASS_SECTION8_H
