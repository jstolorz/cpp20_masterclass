//
// Created by janusz on 20.11.2021.
//

#include "Section14.h"

void Section14::section14() {

   int int_value{45};
   int& ref_int_value = int_value;

   std::cout << int_value << " " << ref_int_value << std::endl;

   ref_int_value = 101;

   std::cout << int_value << " " << ref_int_value << std::endl;

   int data[] = {1,2,3,4,5,6};

   for(auto& d : data){
       d *= 10;
   }

   for(auto d : data){
       std::cout << d << " ";
   }

}
