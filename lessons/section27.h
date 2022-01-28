#pragma once

#include <iostream>
#include <string>

class Dog{
private:
    std::string name;
    std::string dog_breed;
    int dog_age;

public:
    Dog(const std::string &name, const std::string& dogBreed, int dogAge)
    : name(name), dog_breed(dogBreed),dog_age(dogAge) {}

public:
//    Dog& set_name(const std::string& name){
//        this->name = name;
//        return *this;
//    }
//
//    Dog& set_dog_breed(const std::string& breed){
//        this->dog_breed = breed;
//        return *this;
//    }
//
//    Dog& set_dog_age(int age){
//        this->dog_age = &age;
//        return *this;
//    }

    // Setters and Getters
    std::string& getName()  {
        return name;
    }

     const std::string& getName() const {
        return name;
    }

    std::string& getDogBreed()  {
        return dog_breed;
    }

    const std::string& getDogBreed() const {
        return dog_breed;
    }

    int& getDogAge()  {
        return dog_age;
    }

    const int& getDogAge() const {
        return dog_age;
    }

    friend std::ostream &operator<<(std::ostream &os, const Dog &dog) {
        os << "name: " << dog.name << " dog_breed: " << dog.dog_breed << " dog_age: " << dog.dog_age;
        return os;
    }
};


int section(){

    int age = 3;
    Dog dog("aaa","bbb",age);

    std::cout << dog << "\n";

    dog.getName() = "zoja";
    dog.getDogBreed() = "kundelek";
    dog.getDogAge() = 8;

    std::cout << dog << "\n";

    return 0;
}