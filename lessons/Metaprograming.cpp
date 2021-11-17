//
// Created by jstol on 17.11.2021.
//

#include "Metaprograming.h"

void Metaprograming::metaprograming() {
    int val1 = IntIdetity<42>::value;
    int val2 = Metaprograming().int_identity(42);
    double val3 = Metaprograming().identity(33.67);
    int val4 = ValueIdentity<33>::value;
    int sum = IntSum<33,55>::value;

    std::cout << "Simple function and metafunction" << std::endl;
    std::cout << val1 << ", " << val2 <<  std::endl;

    std::cout << "Generic function and metafunction" << std::endl;
    std::cout << val3 << ", " << val4 <<  std::endl;

    std::cout << "Metafunction Sum" << std::endl;
    std::cout << sum<<  std::endl;

    // Convenience calling by variable template
    int val5 = ValueIdentity_v<45>;
    std::cout << val5 << std::endl;

    std::cout << std::is_same_v<int, TypeIdentity_t<int>> << std::endl;

}

int Metaprograming::int_identity(int x) {
    return x;
}

template<typename T>
T Metaprograming::identity(T x) {
    return x;
}

template<typename X, typename Y>
constexpr auto Metaprograming::sum(X x, Y y) {
    return x + y;
}
