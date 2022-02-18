#include "lessons/section30.h"

#include <iostream>

int main() {

    std::cout << section30::count << "\n";

    {
        section30 s{2.2, 3.3};

        std::cout << section30::count << "\n";
    }

    std::cout << section30::count << "\n";

    return 0;
}
