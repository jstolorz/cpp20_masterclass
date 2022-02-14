//
// Created by jstol on 11.02.2022.
//

#pragma once

#include <iostream>

const double PI{3.141592};

class cylinder {
public:
    cylinder() = default;

    cylinder(double radius_param, double height_param = 10)
            : base_radius(radius_param), height(height_param) {
    }

public:
    double getBaseRadius() const {
        return base_radius;
    }

    void setBaseRadius(double baseRadius) {
        base_radius = baseRadius;
    }

    double getHeight() const {
        return height;
    }

    void setHeight(double height) {
        cylinder::height = height;
    }

    double volume() const {
        return PI * base_radius * base_radius * height;
    }

private:
    double base_radius{1};
    double height{2};
};

void print_cylinder(const cylinder &c) {
    std::cout << " cylinder " << c.getHeight() << "\n";
}

class person {
public:
    person() = default;

    person(const std::string &last_name, const std::string &first_name, int age) : last_name(last_name),
                                                                                    first_name(first_name), age(&age) {}

    person(const person& other)
     : person(other.get_last_name(),other.get_first_name(), *(other.get_age()))
    {}

    ~person(){}

public:

    const std::string &get_last_name() const {
        return last_name;
    }

    void set_last_name(const std::string &last_name) {
        person::last_name = last_name;
    }

    const std::string &get_first_name() const {
        return first_name;
    }

    void set_first_name(const std::string &first_name) {
        person::first_name = first_name;
    }

    int *get_age() const {
        return age;
    }

    void set_age(int *age) {
        person::age = age;
    }

public:
    void print_info(){
        std::cout << "Person object at: " << this << "[Last name: " << last_name << ", First name: "
        << first_name << ", age: " << *age << ", age address: " << age << " ] \n";
    }


private:
    std::string last_name{};
    std::string first_name{};
    int *age;
};

int section() {


    person p1("John","Snow",25);
    p1.print_info();

    person p2(p1);

    p2.print_info();


    return 0;
}