#include "Section21.h"

void Section21::section21() {

    double var{23.55};

    std::cout << " var 1 : " << var << std::endl;

    [&](int x){
        var = 44;
        std::cout << "Hello Lambda " << x << " var: " << var << std::endl;
    }(12);

    std::cout << " var 2 : " << var << std::endl;

    [](double a, double b){
        std::cout << "(a + b) = " << (a+b) << std::endl;
    }(23.56,67.43);

    auto sum = [](int a, int b){
        return  a + b;
    };

    int res = sum(12,45);

    std::cout << res << std::endl;
}
