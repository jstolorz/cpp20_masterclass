#include "Section10.h"

void Section10::section10() {

    const int pen{10};
    const int marker{20};
    const int eraser{30};
    const int rectangle{40};
    const int circle{50};
    const int ellipse{60};

    int tool{marker};

    switch (int y{2};tool) {
        case pen: {

            std::cout << "Active tool is pen " << std::endl;
            y = 6;
            break;
        }
        case marker: {
            y = 9;
            std::cout << "Active tool is marker " << std::endl;
            std::cout << "Active tool is marker2 " << std::endl;
            break;
        }
        default:
            y = 8;
            std::cout << "Can't match any tool" << std::endl;
            break;
    };

    std::cout << "AND" << std::endl;

    if(car() && house() && job() && spouse()){
        std::cout << " I am happy"  << std::endl;
    } else{
        std::cout << " I am sad"  << std::endl;
    }

    std::cout << "OR" << std::endl;

    if(car() || house() || job() || spouse()){
        std::cout << " I am happy"  << std::endl;
    } else{
        std::cout << " I am sad"  << std::endl;
    }

    int item_count{-3};

    if(item_count){
        std::cout << "We have item" << std::endl;
    }else{
        std::cout << "Sorry. We have no item"  << std::endl;
    }

    int a{35};
    int b{20};

    int max = (a > b) ? a : b;

    std::cout << max << std::endl;

    bool fast{false};

    int speed {fast ? 300 : 150};

    std::cout << speed << std::endl;

    // constexpr compile time computation cpp 17

    constexpr bool condition{false};

    if constexpr(condition){
        std::cout << "Condition is true" << std::endl;
    }else{
        std::cout << "Condition is false" << std::endl;
    }

    // if initializer
    bool go{false};

    if(int high_speed{33}; go){
        if(high_speed > 5){
            std::cout << "Slow down!" << std::endl;
        } else{
            std::cout << "All good!" << std::endl;
        }
    } else{
        std::cout << "high_speed : " << high_speed << std::endl;
        std::cout << "Stop" << std::endl;
    }



}

bool Section10::car() {
    std::cout << "car function running" << std::endl;
    return true;
}

bool Section10::house() {
    std::cout << "house function running" << std::endl;
    return false;
}

bool Section10::job() {
    std::cout << "job function running" << std::endl;
    return true;
}

bool Section10::spouse() {
    std::cout << "spouse function running" << std::endl;
    return true;
}
