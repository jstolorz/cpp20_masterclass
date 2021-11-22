#include "Section15.h"

void Section15::section15() {

    std::cout << "C is alphanumeric : " << std::isalnum('C') << std::endl;
    std::cout << "^ is alphanumeric : " << std::isalnum('^') << std::endl;

    std::cout << "C is alphabetic : " << std::isalpha('C') << std::endl;
    std::cout << "^ is alphabetic : " << std::isalpha('^') << std::endl;
    std::cout << "7 is alphabetic : " << std::isalpha('7') << std::endl;

    char message[] {"Hello there. How are you doing? 12 The sun is shining. 101 "};

    size_t blank_count{};

    for (size_t i = 0; i < std::size(message); ++i) {
        if(std::isblank(message[i])){
            std::cout << "Found a blank character at index : [" << i << "]" << std::endl;
            ++blank_count;
        }
    }

    std::cout << "In total we found " << blank_count << " blank characters. " << std::endl;

    size_t lowercase_count{};
    size_t uppercase_count{};
    size_t isdigit_count{};

    for(auto ch : message){
        if(std::islower(ch)){
            ++lowercase_count;
        }

        if(std::isupper(ch)){
            ++uppercase_count;
        }

        if(std::isdigit(ch)){
            ++isdigit_count;
        }
    }

    std::cout << "Lower case : " << lowercase_count <<" upper case " << uppercase_count << " digits " << isdigit_count << std::endl;

    for (size_t i = 0; i < std::size(message) ; ++i) {
        message[i] = std::toupper(message[i]);
    }

    for (auto ch : message) {
       std::cout << ch << " ";
    }

    char data[] {"John was 8 years old at this time."};
    char vowel[] {"aAeEiIoOuU"};

    unsigned int vowel_count{};
    unsigned int consonant_count{};

    for (unsigned int i = 0; i < std::size(data); ++i) {

    }

    std::cout << "The string contains " << vowel_count << " vowels and "
              << consonant_count << " consonants";

}
