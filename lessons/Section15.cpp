#include "Section15.h"

void Section15::section15() {

    std::cout << "C is alphanumeric : " << std::isalnum('C') << std::endl;
    std::cout << "^ is alphanumeric : " << std::isalnum('^') << std::endl;

    std::cout << "C is alphabetic : " << std::isalpha('C') << std::endl;
    std::cout << "^ is alphabetic : " << std::isalpha('^') << std::endl;
    std::cout << "7 is alphabetic : " << std::isalpha('7') << std::endl;

    char message[]{"Hello there. How are you doing? 12 The sun is shining. 101 "};

    size_t blank_count{};

    for (size_t i = 0; i < std::size(message); ++i) {
        if (std::isblank(message[i])) {
            std::cout << "Found a blank character at index : [" << i << "]" << std::endl;
            ++blank_count;
        }
    }

    std::cout << "In total we found " << blank_count << " blank characters. " << std::endl;

    size_t lowercase_count{};
    size_t uppercase_count{};
    size_t isdigit_count{};

    for (auto ch: message) {
        if (std::islower(ch)) {
            ++lowercase_count;
        }

        if (std::isupper(ch)) {
            ++uppercase_count;
        }

        if (std::isdigit(ch)) {
            ++isdigit_count;
        }
    }

    std::cout << "Lower case : " << lowercase_count << " upper case " << uppercase_count << " digits " << isdigit_count
              << std::endl;

    for (size_t i = 0; i < std::size(message); ++i) {
        message[i] = std::toupper(message[i]);
    }

    for (auto ch: message) {
        std::cout << ch << " ";
    }

    char data[]{"John was 8 years old at this time."};
    char vowel[]{"aAeEiIoOuU"};

    unsigned int vowel_count{};
    unsigned int consonant_count{};

    for (unsigned int i = 0; i < std::size(data); ++i) {
        if (std::isalpha(data[i])) {
            if (data[i] == 'A' || data[i] == 'E' || data[i] == 'I' || data[i] == 'O' || data[i] == 'U' ||
                data[i] == 'a' || data[i] == 'e' || data[i] == 'i' || data[i] == 'o' || data[i] == 'u') {
                ++vowel_count;
            } else {
                ++consonant_count;
            }
        }
    }

    std::cout << "The string contains " << vowel_count << " vowels and "
              << consonant_count << " consonants";


//    char* result{nullptr};
//
//    char data2[] {"The sky is blue my friend."};
//
//    result = new char[std::size(data2)];
//
//    for (unsigned int i = 0; i < std::size(data2); ++i) {
//        if(std::isblank(data2[i])){
//            result[i] = '_';
//        }else{
//            result[i] = data2[i];
//        }
//    }
//
//
//    std::cout << std::endl;
//    std::cout << result << " " << std::strlen(result) <<  std::endl;
//    std::cout << std::strcmp(result,data2) << std::endl;
//
//    delete[] result;
//    result = nullptr;

    const char *str{"Try not. Do, or do not. There is no try."};
    char target = 'T';
    const char *find = str;

    int iteraction{};

    while ((find = std::strchr(find, target)) != nullptr) {
        std::cout << "Found '" << target << "' starting at '" << find << "'\n";
        ++find;
        ++iteraction;
    }

    std::cout << "iteraction : " << iteraction << std::endl;


    char input[] = "/home/user/hello.cpp";
    char *output = std::strrchr(input, '/');
    if (output) {
        std::cout << output + 1 << std::endl;
    }

    char dest[100] = "Hello ";
    char src[50] = "World!";

    std::strcat(dest, src);

    std::cout << "dest " << dest << std::endl;

    strcat_s(dest, " Goodbye World!");

    std::cout << "dest " << dest << std::endl;

    strncat_s(dest, "hello dino", 5);

    std::cout << "dest " << dest << std::endl;

    const char src1[]{"will old space the replace"};
    const char src2[]{"sense sky hit has"};
    const char src3[]{"hello went is get"};
    const char src4[]{"red blue yellow orange"};

    char *result;
    result = new char[20];

    std::strncpy(result, src1 + 15, 3);
    std::strncpy(result + 3, src2 + 5, 4);
    std::strncpy(result + 7, src3 + 10, 4);
    std::strncpy(result + 10, src4 + 3, 5);

    std::cout << "result : " << result;
    std::cout << std::endl;

    delete[] result;
    result = nullptr;

    std::string say{"Hello World", 5, 3};
    std::string str7{std::string{"Hello"} + " World"};

    std::cout << say << " " << str7 << std::endl;

    std::string str9;
    {
        using namespace std::string_literals;
        str9 = "Hello"s + " World";
    }

    std::cout << str9 << std::endl;

    str9.append(str7);

    std::cout << str9 << std::endl;

    int number{101};

    std::string txt{"Number : "};

    txt = txt + std::to_string(number);

    std::cout << txt << std::endl;

    std::string str10{"The world is our shared home."};
    std::string str11{"Hello "};
    std::string str12{str11.append(str10, 4, 5)};

    const char *str_a{"Hello there!"};
    const char *str_b{"How are you?"};

    std::string re;

    re.append(std::string{str_a}.append(" ").append(str_b));

    std::cout << re << std::endl;

    for (int i = 0; i < re.size(); ++i) {
        std::cout << re[i] << " ";
    }

    re[6] = 'X';
    re.at(2) = 'Y';

    std::cout << re.front() << std::endl;
    std::cout << re.back() << std::endl;

    const char *wrapper = re.c_str();

    std::cout << wrapper << std::endl;



}
