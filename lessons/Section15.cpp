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
              << consonant_count << " consonants" << std::endl;

    std::string str2{"The Phoenix King"};

    const char* wrapper_c_string = str2.c_str();    // only const pointer
    std::cout << "Wrapper read only : " << wrapper_c_string << std::endl;

    char* data2 = str2.data();      // pointer to write and read

    std::cout << "Data read/write : " << data2 << std::endl;

    data2[0] = 'B';

    std::cout << "Data read/write : " << data2 << std::endl;

    std::string s1{"Hello World"};
    std::string s2;
    std::string s3{};

    std::cout << "s1 : " << std::boolalpha << s1.empty() << std::endl;
    std::cout << "s2 : " << std::boolalpha << s2.empty() << std::endl;
    std::cout << "s3 : " << std::boolalpha << s3.empty() << std::endl;

    std::cout << "s1 : "  << s1.size() << std::endl;
    std::cout << "s2 : "  << s2.size() << std::endl;
    std::cout << "s3 : "  << s3.size() << std::endl;

    std::cout << "s1 : "  << s1.length() << std::endl;
    std::cout << "s2 : "  << s2.length() << std::endl;
    std::cout << "s3 : "  << s3.length() << std::endl;

    s1.reserve(100);
    std::cout << "s1 : "  << s1.capacity() << std::endl;
    std::cout << "s2 : "  << s2.capacity() << std::endl;
    std::cout << "s3 : "  << s3.capacity() << std::endl;

    s1.shrink_to_fit();
    std::cout << "s1 : "  << s1.capacity() << std::endl;
    std::cout << "s1 : "  << s1.max_size() << std::endl;

    //s1.clear();
    std::cout << "s1 : "  << s1.capacity() << std::endl;
    std::cout << "s1 : "  << s1.size() << std::endl;

    s1.insert(1,1,'3');

    s3 = "scsscds";
    s3.insert(2,2,'X');

    s3.erase(2,s3.size() - 2);

    s3.push_back('!');

    std::cout << s3 << std::endl;

    s3.pop_back();

    std::cout << s3 << std::endl;

    s3.insert(1,"Hello World!");

    std::cout << s3 << std::endl;

    std::cout << "s1 : " << s1 << std::endl;

    s2.clear();

    s2.insert(0,"Hello");
    //s2.insert(5, s1.substr(6,6)).push_back('!');
    s2.insert(5,s1,6,6).push_back('!');

    std::cout << s2 << std::endl;

    std::cout << std::boolalpha;
    std::cout << " s1 s2 " << s1 << " " << s2  << std::endl;
    std::cout << " == " << (s1 == s2)  << std::endl;
    std::cout << " != " << (s1 != s2)  << std::endl;
    std::cout << " > " << (s1 > s2)  << std::endl;
    std::cout << " < " << (s1 < s2)  << std::endl;
    std::cout << " <= " << (s1 <= s2)  << std::endl;
    std::cout << " >= " << (s1 >= s2)  << std::endl;

    std::string input[] {"I","am","the","king","of","the","jungle"};
    std::string result = input[0];

    for (unsigned int i = 0; i < std::size(input); ++i) {
        if(result < input[i]){
            result = input[i];
        }
    }

    std::cout << "result : " << result << std::endl;

    std::string comp1{"Hello"};
    std::string comp2{"World"};
    std::string comp3{"Hello World"};

    std::cout << "Compare1 " << comp1.compare(comp2) << std::endl;
    std::cout << "Compare2 " << comp2.compare(comp1) << std::endl;
    std::cout << "Compare12 " << comp3.compare(0,5,comp1) << std::endl;

    comp3.replace(0,5, comp2);

    std::cout << comp3 << std::endl;

    comp1.replace(2,2,comp2,0,2);

    std::cout << comp1 << std::endl;

    std::string sw1{"olo"};
    std::string sw2{"bolo"};

    std::cout << sw1 << " " << sw2 << std::endl;
    sw1.swap(sw2);
    std::cout << sw1 << " " << sw2 << std::endl;



}
