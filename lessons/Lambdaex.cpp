//
// Created by jstol on 18.11.2021.
//

#include "Lambdaex.h"

void Lambdaex::lambdaex() {

    int a{23};

    struct{
        void operator()(int x){
            std::cout << x << std::endl;
        }
    }something;


    std::vector<int> v{1,4,6,7,8};

    something(3);

    [](int x){
        if(x%2==0){
            std::cout << x << " is even number " << std::endl;
        }else{
            std::cout << x << " is odd number " << std::endl;
        }
    };

    std::for_each(v.begin(),v.end(), [&a](int x){
        std::cout << x << ", " << a << std::endl;
        //a = 3;   ! not by value
        a = 3;
    });


}
