#include "Section22.h"

inline int add_student(){
    static unsigned int student_count{0};
    student_count++;
    return student_count;
}

inline int odd(){
    static int res{-1};
    res += 2;
    return res;
}

inline void print_odds(unsigned int count){
    for (int i = 0; i < count; ++i) {
        std::cout << odd() << " ";
    }
}

unsigned int factorial(unsigned int n){
    if(n != 0){
        return n * factorial(n - 1);
    }
    return 1;
}

void Section22::section22() {

    std::cout <<  factorial(5) << std::endl;
}


