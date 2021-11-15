//
// Created by janusz on 13.11.2021.
//

#include "Calendar.h"

void Calendar::calendar() {

    const int WIDTH = 5;
    int year{};
    int day{};

    std::cout << "Enter a year: ";
    std::cin >> year;
    std::cout << std::endl;
    int days[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    std::string months[] = {"January", "February", "March", "April",
                          "May", "June", "July", "August", "September",
                          "October", "November", "December"};

    std::cout << "Enter the first dey of the year [1: Monday, ..., 7:Sunday]: ";
    std::cin >> day;

    std::cout << std::endl;
    std::cout << "Calendar for " << year << std::endl;

    for (int i = 0; i < 12; ++i) {
        std::cout << std::setw(WIDTH)
                  << "Mon"
                  << std::setw(WIDTH)
                  << "Tue"
                  << std::setw(WIDTH)
                  << "Wed"
                  << std::setw(WIDTH)
                  << "Thu"
                  << std::setw(WIDTH)
                  << "Fri"
                  << std::setw(WIDTH)
                  << "Sat"
                  << std::setw(WIDTH)
                  << "Sun"
                  << std::endl;

        std::cout << std::endl;
        std::cout << "-- " << months[i] << " " << year << " ------------------" << std::endl;

        for (int j = 1,d=1; j < 50; ++j) {

            if(j < day){
                std::cout << std::setw(WIDTH) << "";
            }else{
                std::cout << std::setw(WIDTH) << d;
                ++d;
            }

            if(j % 7 == 0){
                std::cout << std::endl;
            }

            if(d > days[i]){
                std::cout << std::endl;
                day =  (j%7)+1;
                break;
            }
        }

        std::cout << "-----------------------------------" <<  std::endl;
    }


}
