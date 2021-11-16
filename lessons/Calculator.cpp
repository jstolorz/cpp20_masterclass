#include "Calculator.h"

void Calculator::calculate() {

    char go{};

    srand(std::time(0));

    std::cout << "Welcome to the greatest calculator on Earth!" << std::endl;
    while(true){
        int number1, number2, calc, result, uresult;

         number1 = std::rand() % 200;
         number2 = std::rand() % 200;

         calc = std::rand() % 4;
         std::cout << calc << std::endl;

        switch (calc) {
            case 0:
                result = number1 + number2;
                std::cout << "What's the result of " << number1 << " + " << number2 << " : ";
                std::cin >> uresult;
                message(result, uresult);
                break;
            case 1:
                result = number1 - number2;
                std::cout << "What's the result of " << number1 << " - " << number2 << " : ";
                std::cin >> uresult;
                message(result, uresult);
                break;
            case 2:
                result = number1 * number2;
                std::cout << "What's the result of " << number1 << " * " << number2 << " : ";
                std::cin >> uresult;
                message(result, uresult);
                break;
            case 3:
                result = number1 / number2;
                std::cout << "What's the result of " << number1 << " / " << number2 << " : ";
                std::cin >> uresult;
                message(result, uresult);
                break;

        }


        std::cout << "Do you want me to try again ? (Y | N) : ";
        std::cin >> go;

        if(go == 'n' || go == 'N'){
            break;
        }

    }


}

void Calculator::message(int result, int uresult) {
    if(result == uresult){
        std::cout << "Congratulation! You got the result " << uresult << " right!" << std::endl;
    } else{
        std::cout << "Naah! the correct result is : " << result << std::endl;
    }
}
