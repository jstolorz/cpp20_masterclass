#include "Section13.h"

void Section13::section13() {

    int* p_int{nullptr};
    int int_data{56};

    p_int = &int_data;

    std::cout << *p_int << std::endl;
}
