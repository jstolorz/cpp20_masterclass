#pragma once

#include <iostream>
#include <string>

class dog{
private:
    std::string dog_name;
    std::string dog_breed;
    int dog_age;

public:
    dog(const std::string &name, const std::string& dogBreed, int dogAge)
    : dog_name(name), dog_breed(dogBreed), dog_age(dogAge) {}

public:
//    dog& set_name(const std::string& dog_name){
//        this->dog_name = dog_name;
//        return *this;
//    }
//
//    dog& set_dog_breed(const std::string& breed){
//        this->dog_breed = breed;
//        return *this;
//    }
//
//    dog& set_dog_age(int age){
//        this->dog_age = &age;
//        return *this;
//    }

    // Setters and Getters
    std::string& get_name()  {
        return dog_name;
    }

     const std::string& get_name() const {
        return dog_name;
    }

    std::string& get_dog_breed()  {
        return dog_breed;
    }

    const std::string& get_dog_breed() const {
        return dog_breed;
    }

    int& get_dog_age()  {
        return dog_age;
    }

    const int& get_dog_age() const {
        return dog_age;
    }

    // Dangling reference
    const std::string& compile_dog_info() const{
        std::string info = "dog dog_name: " + dog_name + " dog breed: " + dog_breed +
                " dog age: " + std::to_string(dog_age);
        return info; // <- dangling !!
    }


    friend std::ostream &operator<<(std::ostream &os, const dog &dog) {
        os << "dog_name: " << dog.dog_name << " dog_breed: " << dog.dog_breed << " dog_age: " << dog.dog_age;
        return os;
    }
};


int section(){

    int age = 3;
    dog dog("aaa", "bbb", age);

    std::cout << dog << "\n";

    dog.get_name() = "zoja";
    dog.get_dog_breed() = "kundelek";
    dog.get_dog_age() = 8;

    std::cout << dog << "\n";

    const std::string& str_ref = dog.compile_dog_info();

    std::cout << str_ref << "\n";

    std::cout << "done\n";

    return 0;
}