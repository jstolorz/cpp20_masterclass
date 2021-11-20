#include "Section12.h"

void Section12::section12() {

    int numbers[] {1, 2, 4, 5, 1, 8, 2, 3, 6, 1, 4, 2};
    //int numbers[] {1,2,3,5,7,9,100};
    int count{};

    for (int i = 0; i < std::size(numbers); ++i) {
        for (int j = i+1; j < std::size(numbers); ++j) {
            if(numbers[i] == numbers[j] && numbers[i] != -101){
                numbers[j] = -101;
                ++count;
            }
        }
        std::cout << std::endl;
    }

    std::cout << "The collection contains " << (std::size(numbers) - count) << " unique numbers, they are : ";
    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); ++i) {
        if(numbers[i] != -101)
        std::cout << numbers[i] << " ";
    }

    bool sorted{true};

    for (int i = 0; i < std::size(numbers); ++i) {
        if(i == 0){
            continue;
        }

        if(numbers[i-1] > numbers[i]){
            sorted = false;
        }
    }

    std::cout << "Sorted ? " << sorted << std::endl;

    char message1[6] {'H','e','l','l','o','\0'};

    std::cout << message1 << std::endl;

    char message2[] {"Hello"};

    std::cout << message2 << std::endl;

    char message[] {'T','h','e',' ','s','k','y',' ','i','s',
                    ' ','b','l','u','e',' ','m','y',' ','f','r','i','e','n','d','\0'};
    int vowel_count{};

    for (int i = 0; i < std::size(message); ++i) {
        switch (message[i]) {
            case 'E':
               ++vowel_count;
                break;
            case 'I':
                ++vowel_count;
                break;
            case 'O':
                ++vowel_count;
                break;
            case 'U':
                ++vowel_count;
                break;
            case 'e':
                ++vowel_count;
                break;
            case 'i':
                ++vowel_count;
                break;
            case 'o':
                ++vowel_count;
                break;
            case 'u':
                ++vowel_count;
                break;
        };
    }

    std::cout << "The string : " << message << " has " << vowel_count << " vowels" << std::endl;


    //srand(std::time(0));
    auto t = time(nullptr);
    std::srand(t);

    int random_num = std::rand() % 11;   // will be between [0-10]
    std::cout << random_num << std::endl;

    int data1[] {1,2,4,5,9,3,6,7,44,55};
    int data2[] {11,2,44,45,49,43,46,47,55,88};

    int comm_count{};

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if(data1[i] == data2[j]){
                ++comm_count;
            }
        }
    }

    if(comm_count > 0){
        std::cout << "There are " << comm_count << " common elements they are : ";
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                if(data1[i] == data2[j]){
                     std::cout << data1[i] << " ";
                }
            }
        }
    }else{
        std::cout << "There are 0 common elements.";
    }

    std::cout << std::endl;

    int packages[4][3];

    for(size_t i{0}; i < std::size(packages); ++i){
        for (size_t j{0}; j < std::size(packages[i]); ++j) {
            std::cout << " Item[" << i << ", " << j << "] : " << packages[i][j] << " ";
        }
        std::cout << std::endl;
    }

    const size_t name_length{15};

    char members [][name_length] {
            {'J','a','n'},
            {'S','a','m'},
            {'A','n','n','a'}
    };

    for (size_t i = 0; i < std::size(members); ++i) {
        std::cout << members[i] << std::endl;
    }

    char members1 [][name_length] {
        "Janusz",
        "Iwona",
        "Ola",
        "Marta"
    };

    for (size_t i = 0; i < std::size(members1); ++i) {
        std::cout << members1[i] << std::endl;
    }





}
