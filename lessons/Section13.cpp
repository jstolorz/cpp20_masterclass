#include "Section13.h"

void Section13::section13() {

    // General Reference
    int var1{33};
    int* p_var2{&var1};              // Non const pointer to var1
    const int* p_var3{&var1};        // Pointer to const var1
    const int* const p_var4{&var1};  // Const pointer p_var4 to const data var1
    int* const p_var5{&var1};        // Const pointer p_var5
    // ===========================================================================


    int* p_int{nullptr};
    int int_data{56};

    p_int = &int_data;

    std::cout << *p_int << std::endl;

    const char *p_message{"Hello World!"};
    char message[] = {"Hello World!"};

    std::cout << *p_message << " " << p_message << " " << message << std::endl;

    const char *predication[]{
            "a lot of kids running in the backyard!",
            "a lot of empty beer bootles on your work table.",
            "you Partying too much with kids wearing weird clothes.",
            "you running away from something really scary",
            "clouds gathering in the sky and an army standing ready for war",
            "dogs running around in a deserted empty city",
            "a lot of cars stuck in a terrible traffic jam",
            "you sitting in the dark typing lots of lines of code on your dirty computer",
            "you yelling at your boss. And oh no! You get fired!",
            "you laughing your lungs out. I've never seen this before."
    };

    std::cout << predication[2] << std::endl;

    int var{22};
    int avar{44};

    //const to var cannot modify var;
    const int* p_var{&var};
    //*p_var = 66;

    p_var = &avar;

    // const pointer
    int* const cp_var{&var};
    *cp_var = 66;

    std::cout << *p_var << std::endl;

    // Problem with const array to char
    const  char*  students [] {
            "Daniel Gray",
            "Tuna Philbe",
            "The Rock",
            "Kumar Singh",
            "Sam Ali",
            "Dave Mahoro"
    };

    //Cannot do this OK
    //students[0] = 'k';

    //Cannot do this OK
    //students[0] = "Bob";

    const char* new_student {"Janusz Stolorz"};

    // But you can this !!  we have to change students to: const  char* const students []
    students[0] = new_student;

    std::cout << students[0] << std::endl;





}
