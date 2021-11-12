#include "Section11.h"

void Section11::section11() {

    unsigned int sum{};
    size_t end{100};

   for(size_t i{0}, y{99}; i < end; ++i, --y){
       std::cout << "y : " << y << std::endl;
       sum += i;
   }

   std::cout <<"Sum: " << sum << std::endl;

    for( unsigned char i{0}; i< 255 ; ++i){
        if(i > 64 && i < 90){
            std::cout << i << " ";
        } else if(i == 90){
            std::cout << i;
        }
    }

    std::cout << std::endl;
    // The coma operator
    int increment{5};
    int number1{10};
    int number2{20};
    int number3{25};
    int result = (number1 *= ++increment, number2 - (++increment), number3 += ++increment);

    std::cout << result << std::endl;

    std::vector<int> numbers {1,21,4,5,7,3,9,3,5,17,15};

    for(int item : numbers){
        if(item % 3 == 0){
            std::cout << item << " ";
        }
    }

    const unsigned int COUNT{10};


    std::vector<double> unit_prices {10.4,21.5,14.0,15.2,7.9};
    std::vector<double> number_of_items{60,20,10,30,20,50};

    double least_cost{1000};
    unsigned int i{0};

    while(i < unit_prices.size()){
        if((unit_prices[i] * number_of_items[i]) < least_cost){
            least_cost = unit_prices[i] * number_of_items[i];
        }
        ++i;
    }

    std::cout << "The least I can pay is  : " << least_cost;

    i = 100;

    do{
        if(i % 19 ==0){
            std::cout << i << " ";
        }
        ++i;
    } while (i <= 1000);


    // size_t test = 10; infinite loop

    for(int test = 10; test >= 0; --test){
        std::cout << " [" << test << "] " << std::endl;
        --test;
    }

    size_t index{};

    while (index < 10){

        ++index;

        if(index == 5){
            continue;
        }

        if(index == 9){
            break;
        }

        std::cout << "index = " << index << std::endl;
    }

}
