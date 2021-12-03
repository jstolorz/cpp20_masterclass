//
// Created by jstol on 03.12.2021.
//

#include "Section17.h"

enum class Month{
    Jan = 1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec
};

enum class DayOfWeek{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

void print_day(DayOfWeek day);

void Section17::section17() {
    Month month{Month::May};
    std::cout << static_cast<int>(month) << std::endl;

    DayOfWeek day{DayOfWeek::Friday};

    print_day(day);
}

void print_day(DayOfWeek day) {
    using enum DayOfWeek;
    switch (day) {
        case Monday  :
            std::cout << "Today is Monday";
            break;

        case Tuesday  :
            std::cout << "Today is Tuesday";
            break;

        case Wednesday :
            std::cout << "Today is Wednesday";
            break;

        case Thursday   :
            std::cout << "Today is Thursday";
            break;

        case Friday  :
            std::cout << "Today is Friday";
            break;

        case Saturday  :
            std::cout << "Today is Saturday";

        case Sunday  :
            std::cout << "Today is Sunday";
            break;

        default :
            std::cout << "No day";
    }
}