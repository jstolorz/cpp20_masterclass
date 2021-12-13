#include "Section22.h"

int add_student(){
    static unsigned int student_count{0};
    student_count++;
    return student_count;
}

int odd(){
    static int res{-1};
    res += 2;
    return res;
}

void print_odds(unsigned int count){
    for (int i = 0; i < count; ++i) {
        std::cout << odd() << " ";
    }
}

void Section22::section22() {

    print_odds(5);
}
