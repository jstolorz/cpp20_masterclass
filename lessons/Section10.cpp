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
//
//    int test{0};
//
//    std::cout << "Please type in an int value : ";
//    std::cin >> test;
//
//    std::string  result = (test % 2 == 0) ? " is even " : " is odd";
//
//    std::cout << test << result << std::endl;

//      int age{0};
//
//      std::cout << "Please type your age: ";
//      std::cin >> age;
//
//      if(age >= 21){
//          if(age <= 39){
//              std::cout << "You are eligible for the treatment" << std::endl;
//          }else{
//              std::cout << "Sorry you are too old for the treatment " << std::endl;
//          }
//      }else{
//          std::cout << "Sorry you are too young for the treatment " << std::endl;
//      }

//    Monday Tuesday Wednesday Thursday Friday Saturday Sunday

//    switch (day) {
//        case 1:
//            std::cout << "Today is Monday " << std::endl;
//            break;
//        case 2:
//            std::cout << "Today is Tuesday " << std::endl;
//            break;
//        case 3:
//            std::cout << "Today is Wednesday " << std::endl;
//            break;
//        case 4:
//            std::cout << "Today is Thursday " << std::endl;
//            break;
//        case 5:
//            std::cout << "Today is Friday " << std::endl;
//            break;
//        case 6:
//            std::cout << "Today is Saturday " << std::endl;
//            break;
//        case 7:
//            std::cout << "Today is Sunday " << std::endl;
//            break;
//        default:
//            std::cout << day <<  " is not a valid day of week ! " << std::endl;
//            break;
//    }
//
//    int day{0};
//    int past{0};
//
//    std::cout << "With day is today [1: Monday, 2: Tuesday, 3: Wednesday, 4: Thursday, 5: Friday, 6: Saturday, 7: Sunday] ? ";
//    std::cin >> day;
//
//    std::cout << "How many days have passed up to today : ";
//    std::cin >> past;
//
//
//        switch (day) {
//        case 1:
//            std::cout << "Today is Monday " << std::endl;
//            break;
//        case 2:
//            std::cout << "Today is Tuesday " << std::endl;
//            break;
//        case 3:
//            std::cout << "Today is Wednesday " << std::endl;
//            break;
//        case 4:
//            std::cout << "Today is Thursday " << std::endl;
//            break;
//        case 5:
//            std::cout << "Today is Friday " << std::endl;
//            break;
//        case 6:
//            std::cout << "Today is Saturday " << std::endl;
//            break;
//        case 7:
//            std::cout << "Today is Sunday " << std::endl;
//            break;
//        default:
//            std::cout << day <<  " is not a valid day of week ! " << std::endl;
//            break;
//    }
//
//    int res = (day - 1) - past;
//
//    int res2 = res/7;
//
//    res2 = res2 * 7;
//
//    switch (res2 - res) {
//        case 7:
//            std::cout << "if we  Monday " << std::endl;
//            break;
//        case 6:
//            std::cout << "Today is Tuesday " << std::endl;
//            break;
//        case 5:
//            std::cout << "Today is Wednesday " << std::endl;
//            break;
//        case 4:
//            std::cout << "Today is Thursday " << std::endl;
//            break;
//        case 3:
//            std::cout << "Today is Friday " << std::endl;
//            break;
//        case 2:
//            std::cout << "Today is Saturday " << std::endl;
//            break;
//        case 1:
//            std::cout << "Today is Sunday " << std::endl;
//            break;
//        default:
//            std::cout << day <<  " is not a valid day of week ! " << std::endl;
//            break;
//    }
//

//     int x{0};
//     int y{0};
//
//     std::cout << "Type in your x location: ";
//     std::cin >> x;
//
//    std::cout << "Type in your y location: ";
//    std::cin >> y;
//
//     if((x >= -10 && x <= 10) && (y >= -5 && y <= 5)){
//         std::cout << " You are completely surrounded. Don't move!" << std::endl;
//     }else{
//         std::cout << "You're out of range! " << std::endl;
//     }


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
