#include "Section19.h"


void max_str(const std::string& input1, const std::string& input2, std::string& output){
    if(input1 > input2){
        output = input1;
    }else{
        output = input2;
    }
}

void is_sum_even(int data[], unsigned int size, bool& result){

    int sum{};

    for (int i = 0; i < size; ++i) {
        sum += data[i];
    }

    if(sum % 2 == 0){
        result = true;
    }else{
        result = false;
    }
}

int add(int a, int b){
    int result = a + b;
    std::cout << "add result address: " << &result << std::endl;
    return  result;
}

std::string add_strings(std::string str1, std::string str2){
    std::string result = str1 + str2;
    std::cout << "add_strings result address: " << &result << std::endl;
    return result;
}

int& max_return_reference(int& a, int& b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int* max_return_pointer(int* a, int* b){
    if(*a > *b){
        return a;
    }else{
        return b;
    }
}

// Problems of references
//int& sum_rp(int& a, int& b){
//    int result = a + b;
//    return result;     <- Ref to local variable !!!!
//}

int& max_input_by_value(int& a,int& b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

auto& amax(int& a, int& b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

double add(double a, double b){
    return a + b;
}

std::string add( std::string& a,std::string& b){
    return a + b;
}

const char* add(char* a, const char* b){
    std::strcat(a,b);
    return a;
}



void Section19::section19() {

    std::string in1{"dog"};
    std::string in2{"Cat"};
    std::string out{};
    int data[]{1,2,3,4,6,7,8};
    bool result{};

    max_str(in1,in2,out);

    std::cout << "Max is : " << out << std::endl;

    is_sum_even(data,sizeof(data)/sizeof(int),result);

    std::cout << result << std::endl;

    int res = add(12,34);
    std::cout << "res address : " << &res  << std::endl;

    std::string ress = add_strings("Hello"," World");

    std::cout << "ress address: " << &ress << std::endl;

    int a{10};
    int b{20};

    // returning by reference
    int& var_ref = max_return_reference(a,b);

    // returning by copy !
    int var_cp = max_return_reference(a,b);

    std::cout << "b: " << b << " var_ref : "  << var_ref << " var_cp : " << var_cp << std::endl;

    ++var_ref;

    std::cout << "b: " << b << " var_ref : "  << var_ref << " var_cp : " << var_cp << std::endl;

    int* val_ptr = max_return_pointer(&a,&b);

    std::cout << " b: " << b << " val_ptr : " << *val_ptr << std::endl;

    ++(*val_ptr);

    std::cout << " b: " << b << " val_ptr : " << *val_ptr << std::endl;


//    Program crash !
//    int& var_rp = max_input_by_value(a,b);
//
//    std::cout << " vat_rp: " << var_rp << std::endl;

      const double some_var_const{33.3};
      double some_var{55.5};
      double& some_var_ref{some_var};
      auto x = some_var;
      auto y = some_var_ref;  // y not a reference y is a copy (ref correctly  auto& )
      auto& z = some_var_ref;
      auto ca = some_var_const; // use auto& to hold const info

      ca = 77.5;  // copy not const !!

      std::cout << &some_var << " " << &some_var_ref << " "  << &z <<  " "  << &y << "\n";

      std::cout << sizeof(x) << " " << sizeof(some_var) << "\n";

      int aa{12};
      int bb{23};

      int& ares = amax(aa,bb);

    char name[20] {"The sky"};
    auto result_str  = add (name," is blue");
    std::cout << "result_str : " <<  result_str;

}
