#include "Section13.h"

void Section13::section13() {

    // General Reference
    int var1{33};
    int *p_var2{&var1};              // Non const pointer to var1
    const int *p_var3{&var1};        // Pointer to const var1
    const int *const p_var4{&var1};  // Const pointer p_var4 to const data var1
    int *const p_var5{&var1};        // Const pointer p_var5
    // ===========================================================================


    int *p_int{nullptr};
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
    const int *p_var{&var};
    //*p_var = 66;

    p_var = &avar;

    // const pointer
    int *const cp_var{&var};
    *cp_var = 66;

    std::cout << *p_var << std::endl;

    // Problem with const array to char
    const char *students[]{
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

    const char *new_student{"Janusz Stolorz"};

    // But you can this !!  we have to change students to: const  char* const students []
    students[0] = new_student;

    std::cout << students[0] << std::endl;

    int data[]{11, 2, 52, 53, 9, 13, 5, 7, 12, 11};


    int *max_address{data};

    for (unsigned int i = 0; i < std::size(data); ++i) {
        if (*max_address < data[i]) {
            max_address = &data[i];
        }
    }

    std::cout << *max_address << std::endl;


    int arr0[]{1, 2, 3, 4, 5};
    int arr1[]{6, 7, 8, 9, 10};

    std::for_each(arr0, arr0 + sizeof(arr0) / sizeof(int), [](int i) { std::cout << i << " "; });
    std::cout << std::endl;
    std::for_each(arr1, arr1 + sizeof(arr1) / sizeof(int), [](int i) { std::cout << i << " "; });
    std::cout << std::endl;

    // swap array swap pointer
    int *p_arr0{arr0};
    int *p_arr1{arr1};
    int *temp{arr1};

    p_arr1 = p_arr0;
    p_arr0 = temp;

    int scores[]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int *p_scores{scores};

    *(p_scores + 1) = 33;

    std::cout << "Address : " << p_scores << " value : " << *(p_scores) << std::endl;
    ++p_scores;
    std::cout << "Address : " << p_scores << " value : " << *(p_scores) << std::endl;
    ++p_scores;
    std::cout << "Address : " << p_scores << " value : " << *(p_scores) << std::endl;
    ++p_scores;
    std::cout << "Address : " << p_scores << " value : " << *(p_scores + 2) << std::endl;

    unsigned int offset{3};

    std::cout << "The element " << offset << " slots away from the beginning is : " << *(scores + offset) << std::endl;

    int *pointer1{scores + 1};
    int *pointer2{scores + 7};

    std::cout << pointer2 - pointer1 << std::endl;
    std::cout << (pointer2 == pointer1) << std::endl;
    std::cout << (pointer2 != pointer1) << std::endl;
    std::cout << (pointer2 >= pointer1) << std::endl;
    std::cout << (pointer2 <= pointer1) << std::endl;

    // Dynamic allocation
    int *p_number{nullptr};

    p_number = new int;

    *p_number = 101;

    std::cout << *p_number << std::endl;

    delete p_number;
    p_number = nullptr;
//
//    for(size_t i{}; i < 1000000000; ++i){
//        int* lots_of_ints{new(std::nothrow) int[10000000]};
//
//        if(lots_of_ints == nullptr){
//            std::cout << "Memory allocation failed" << std::endl;
//        }else{
//            std::cout << "Memory allocation succeeded" << std::endl;
//        }
//    }
//
//    std::cout << "End lots of int init" << std::endl;

//    for(size_t i{}; i < 100; ++i){
//        try {
//            int* data = new int[10000000];
//        }catch (std::exception& ex){
//            std::cout << "Something wrong: " << ex.what() << std::endl;
//        }
//    }

    size_t size{10};

    double *p_salaries{
            new(std::nothrow) double[size]}; // not like array in stack that is pointer so std::size() dosn't work and for each loop too !!

    for (int i = 0; i < size; ++i) {
        *(p_salaries + i) = i * 2.44;
    }

    for (int i = 0; i < size; ++i) {
        std::cout << p_salaries[i] << " " << *(p_salaries + i) << " " << (p_salaries + i) << std::endl;
    }

    delete[] p_salaries;
    p_salaries = nullptr;

    int data1[]{1, 2, 3, 4, 5, 66, 77};
    int data2[]{10, 20, 30, 40, 50, 60};

    int *new_array = new int[13];

//      int i{};
//
//    for (i; i < 7; ++i) {
//        new_array[i] = data1[i];
//    }

//    for (int j = 0; j < 6; ++j,++i) {
//        new_array[i] = data2[j];
//    }
//
//    for (int j = 0; j < 13; ++j) {
//        std::cout << new_array[j] << " ";
//    }

    for (int j = 0; j < 13; ++j) {
        if (j < 7) {
            new_array[j] = data1[j];
        } else {
            new_array[j] = data2[j - 7];
        }
    }

    for (int j = 0; j < 13; ++j) {
        std::cout << new_array[j] << " ";
    }


    delete[] new_array;
    new_array = nullptr;

}
