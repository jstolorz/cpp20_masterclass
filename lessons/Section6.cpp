#include "Section6.h"

constinit int age = 88;

void Section6::section6() {
   std::cout << "section6" << std::endl;

   constexpr int eye_count{2};
   constexpr int var{eye_count};
   const unsigned int earth_radius_km{6371};

   std::cout << eye_count << std::endl;
    std::cout << var << std::endl;
   std::cout << earth_radius_km << std::endl;

   static_assert(eye_count == 2);

   std::cout << age << std::endl;

   age = 100;

   std::cout << age << std::endl;
}
