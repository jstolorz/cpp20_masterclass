#ifndef CPP20_MASTERCLASS_METAPROGRAMING_H
#define CPP20_MASTERCLASS_METAPROGRAMING_H

#include <iostream>

class Metaprograming {

    // Metafunction proccess during compile time;
    // equivalent for today:
    template<typename X, typename Y>
    constexpr auto sum(X x, Y y);
    // Simple metafunctiom: identity
    template<int X>
    struct IntIdetity{
        static constexpr int value = X;
    };

    // Generic identity Metafunction
    template<auto Value>
    struct ValueIdentity{
        static constexpr auto value = Value;
    };

    // Type metafunction
    template<typename T>
    struct TypeIdentity{
        using type = T;
    };

    // Metafunction: Sum
    template<auto X, auto Y>
    struct IntSum{
        static constexpr auto value = X + Y;
    };

    // Generic identity function
    template<typename T>
    T identity(T x);

    // Simple functiom: identity
    int int_identity(int x);

public:
    // Variable template _v
    template<auto X>
    static const auto ValueIdentity_v = ValueIdentity<X>::value;

    // type template _t
    template<typename T>
    using TypeIdentity_t = typename TypeIdentity<T>::type;


    static void metaprograming();
};


#endif //CPP20_MASTERCLASS_METAPROGRAMING_H
