//
// Created by janusz on 15.01.2022.
//

#pragma once

#include <iostream>
#include <string>

class Dog{
private:
    std::string name;
    std::string dog_breed;
    int dog_age;

public:
    Dog* set_name(const std::string& name){
        this->name = name;
        return this;
    }

    Dog* set_dog_breed(const std::string& breed){
        this->dog_breed = breed;
        return this;
    }

    Dog* set_dog_age(const int age){
        this->dog_age = age;
        return this;
    }

    const std::string &getName() const {
        return name;
    }

    const std::string &getDogBreed() const {
        return dog_breed;
    }

    int getDogAge() const {
        return dog_age;
    }

    friend std::ostream &operator<<(std::ostream &os, const Dog &dog) {
        os << "name: " << dog.name << " dog_breed: " << dog.dog_breed << " dog_age: " << dog.dog_age;
        return os;
    }
};

int section(){


    Dog dog;

    dog.set_name("Zoja")->set_dog_breed("Kundelek")->set_dog_age(8);

    std::cout << dog;


    return 0;
}