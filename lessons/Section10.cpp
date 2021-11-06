#include "Section10.h"

void Section10::section10() {

    const int pen{10};
    const int marker{20};
    const int eraser{30};
    const int rectangle{40};
    const int circle{50};
    const int ellipse{60};

    int tool{marker};

    switch (tool) {
        case pen:
            std::cout << "Active tool is pen " << std::endl;
            break;
        case marker:
            std::cout << "Active tool is marker " << std::endl;
            std::cout << "Active tool is marker2 " << std::endl;
            break;
        default:
            std::cout << "Can't match any tool" << std::endl;
            break;
    };

}
