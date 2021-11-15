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

    char message[6] {'H','e','l','l','o','\0'};

    std::cout << message << std::endl;

    char message2[] {"Hello"};

    std::cout << message2 << std::endl;

}
