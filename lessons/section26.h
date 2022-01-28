//
// Created by janusz on 15.01.2022.
//

#pragma once

#include <iostream>
#include <string>

class dog{
private:
    std::string dog_name;
    std::string dog_breed;
    int dog_age;

public:
    dog& set_name(const std::string& name){
        this->dog_name = name;
        return *this;
    }

    dog& set_dog_breed(const std::string& breed){
        this->dog_breed = breed;
        return *this;
    }

    dog& set_dog_age(const int age){
        this->dog_age = age;
        return *this;
    }

    const std::string &get_name() const {
        return dog_name;
    }

    const std::string &get_dog_breed() const {
        return dog_breed;
    }

    int get_dogAge() const {
        return dog_age;
    }

    friend std::ostream &operator<<(std::ostream &os, const dog &dog) {
        os << "dog_name: " << dog.dog_name << " dog_breed: " << dog.dog_breed << " dog_age: " << dog.dog_age;
        return os;
    }
};

int section(){


    dog dog;

    dog.set_name("Zoja").set_dog_breed("Kundelek").set_dog_age(8);

    std::cout << dog;


    return 0;
}