//
// Created by jstol on 04.11.2021.
//

#include "Section8.h"

void Section8::section8() {

    const int COLUMN_WIDTH {20};
    unsigned short int data {0b11111110};
    unsigned char value1 {0b00000011};
    unsigned char value2 {0b00000101};
    unsigned char sandbox_var {0b00110100};

    // mask
    unsigned char mask_bit_0 {0b00000001};
    unsigned char mask_bit_1 {0b00000010};
    unsigned char mask_bit_2 {0b00000100};
    unsigned char mask_bit_3 {0b00001000};
    unsigned char mask_bit_4 {0b00010000};
    unsigned char mask_bit_5 {0b00100000};
    unsigned char mask_bit_6 {0b01000000};
    unsigned char mask_bit_7 {0b10000000};

    unsigned char var {0b00000000};

     std::cout << "data (dec) : " << std::dec << data << std::endl;
     std::cout << "data (hex) : " << std::hex << std::showbase << data << std::endl;
     std::cout << "data (bin) : " << std::bitset<16>(data) << std::endl;

     // shift right 1 bit position
     data = static_cast<unsigned short int>(data >> 1);
    // dzielenie przez 2 ^ n   n = 1
    std::cout << "Shift right 1 bit position" << std::endl;
    std::cout << "data (dec) : " << std::dec << data << std::endl;
    std::cout << "data (hex) : " << std::hex << std::showbase << data << std::endl;
    std::cout << "data (bin) : " << std::bitset<16>(data) << std::endl;

    // shift right 4 bit position
    data = static_cast<unsigned short int>(data >> 4);
    // dzielenie przez 2 ^ n   n = 4
    std::cout << "Shift right 4 bit position" << std::endl;
    std::cout << "data (dec) : " << std::dec << data << std::endl;
    std::cout << "data (hex) : " << std::hex << std::showbase << data << std::endl;
    std::cout << "data (bin) : " << std::bitset<16>(data) << std::endl;

    // shift left 1 bit position
    data = static_cast<unsigned short int>(data << 1);
    // mozenie przez 2 ^ n  n = 1
    std::cout << "Shift right 1 bit position" << std::endl;
    std::cout << "data (dec) : " << std::dec << data << std::endl;
    std::cout << "data (hex) : " << std::hex << std::showbase << data << std::endl;
    std::cout << "data (bin) : " << std::bitset<16>(data) << std::endl;

    std::cout << std::setw(COLUMN_WIDTH) << "value1" <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (value1) << std::endl;

    std::cout << std::setw(COLUMN_WIDTH) << "value2" <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (value2) << std::endl;

    std::cout << std::setw(COLUMN_WIDTH) << " value1 & value2 " <<  std::setw(COLUMN_WIDTH)
    << std::bitset<8> (value1 & value2) << std::endl;

    std::cout << std::setw(COLUMN_WIDTH) << " value1 | value2 " <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (value1 | value2) << std::endl;

    std::cout << std::setw(COLUMN_WIDTH) << " value1 ^ value2 " <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (value1 ^ value2) << std::endl;

    std::cout << std::setw(COLUMN_WIDTH) << " ~value1" <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (~value1) << std::endl;

    std::cout << std::setw(COLUMN_WIDTH) << " ~value2" <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (~value2) << std::endl;

    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : " <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (sandbox_var) << std::endl;

    std::cout << "shift left 2 bits positions in places " << std::endl;

    sandbox_var <<= 2;

    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : " <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (sandbox_var) << std::endl;

    std::cout << "shift right 2 bits positions in places " << std::endl;

    sandbox_var >>= 2;

    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : " <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (sandbox_var) << std::endl;

    std::cout << "Compound OR with 0000 0010 " << std::endl;

    sandbox_var |= 0b00000010;

    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : " <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (sandbox_var) << std::endl;

    std::cout << "Compound AND with 0000 1100 " << std::endl;

    sandbox_var &= 0b00001100;

    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : " <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (sandbox_var) << std::endl;

    std::cout << "Compound XOR with 0000 0011 " << std::endl;

    sandbox_var ^= 0b00000011;

    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : " <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (sandbox_var) << std::endl;

    // mask
    // Setting Bits

    std::cout << "Setting bits in position 1 " << std::endl;
    var |= mask_bit_1;

    std::cout << std::setw(COLUMN_WIDTH) << "var : " <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (var) << std::endl;

    std::cout << "Setting bits in position 5 " << std::endl;
    var |= mask_bit_5;

    std::cout << std::setw(COLUMN_WIDTH) << "var : " <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (var) << std::endl;

    // Reset Bits

    std::cout << "Reset bits in position 1 " << std::endl;
    var &= (~mask_bit_1);

    std::cout << std::setw(COLUMN_WIDTH) << "var : " <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (var) << std::endl;

    std::cout << "Reset bits in position 5 " << std::endl;
    var &= (~mask_bit_5);

    std::cout << std::setw(COLUMN_WIDTH) << "var : " <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (var) << std::endl;

    // Set all bits

    std::cout << "Set all bits " << std::endl;
    var |= (mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);

    std::cout << std::setw(COLUMN_WIDTH) << "var : " <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (var) << std::endl;

    std::cout << "Reset bits at pos 0,2,4,6 " << std::endl;
    var &= ~(mask_bit_0 | mask_bit_2 | mask_bit_4 | mask_bit_6 );

    std::cout << std::setw(COLUMN_WIDTH) << "var : " <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (var) << std::endl;

    // Check bit at position

    std::cout << " Checking bit at position (on/off) " << std::bitset<8> (var) << std::endl;

    std::cout << std::boolalpha;
    std::cout << std::setw(COLUMN_WIDTH) << "bits0 is " << std::setw(COLUMN_WIDTH) << static_cast<bool>((var & mask_bit_0) >> 0) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "bits1 is " << std::setw(COLUMN_WIDTH) << static_cast<bool>((var & mask_bit_1) >> 1) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "bits2 is " << std::setw(COLUMN_WIDTH) << static_cast<bool>((var & mask_bit_2) >> 2) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "bits3 is " << std::setw(COLUMN_WIDTH) << static_cast<bool>((var & mask_bit_3) >> 3) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "bits4 is " << std::setw(COLUMN_WIDTH) << static_cast<bool>((var & mask_bit_4) >> 4) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "bits5 is " << std::setw(COLUMN_WIDTH) << static_cast<bool>((var & mask_bit_5) >> 5) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "bits6 is " << std::setw(COLUMN_WIDTH) << static_cast<bool>((var & mask_bit_6) >> 6) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "bits7 is " << std::setw(COLUMN_WIDTH) << static_cast<bool>((var & mask_bit_7) >> 7) << std::endl;

    if(((var & mask_bit_1) >> 1)){
        std::cout << "position 1 is set" << std::endl;
    }

    // Toggling bits at position

    std::cout << "Toggle bit 0 " << std::endl;
    var ^= mask_bit_0;

    std::cout << std::setw(COLUMN_WIDTH) << "var : " <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (var) << std::endl;

    std::cout << "Toggle bit 7 " << std::endl;
    var ^= mask_bit_7;

    std::cout << std::setw(COLUMN_WIDTH) << "var : " <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (var) << std::endl;

    std::cout << "Toggle multiple bits " << std::endl;
    var ^= (mask_bit_1 | mask_bit_4 | mask_bit_3);

    std::cout << std::setw(COLUMN_WIDTH) << "var : " <<  std::setw(COLUMN_WIDTH)
              << std::bitset<8> (var) << std::endl;

}
