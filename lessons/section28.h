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

    person(const person &other)
            : person(other.get_last_name(), other.get_first_name(), *(other.get_age())) {}

    ~person() {}

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
    void print_info() {
        std::cout << "Person object at: " << this << "[Last name: " << last_name << ", First name: "
                  << first_name << ", age: " << *age << ", age address: " << age << " ] \n";
    }


private:
    std::string last_name{};
    std::string first_name{};
    int *age;
};

class point {
public:
    point(double x, double y) : x(&x), y(&y) {}

    point(const point &other)
            : x(new double(*(other.get_x()))),
              y(new double(*(other.get_y()))) {
        std::cout << "Copy constructor\n";
    }

    point(point &&other)
            : x(other.get_x()),
              y(other.get_y()){
        other.set_x(nullptr);
        other.set_y(nullptr);
        std::cout << "Move constructor\n";
    }

    ~point() {
       if( x != nullptr){
           x = nullptr;
           delete x;
       }

        if( y != nullptr){
            y = nullptr;
            delete y;
        }
    }

public:

    double *get_x() const {
        return x;
    }

    void set_x(double *x) {
        point::x = x;
    }

    double *get_y() const {
        return y;
    }

    void set_y(double *y) {
        point::y = y;
    }

    friend std::ostream &operator<<(std::ostream &os, const point &point) {
        os << "x: " << point.x << " y: " << point.y;
        return os;
    }

private:
    double *x{};
    double *y{};
};

int section() {


    person p1("John", "Snow", 25);
    p1.print_info();

    person p2(p1);

    p2.print_info();

    std::cout << "-------------\n";

    point p3(point(40.5, 50.5));

    std::cout << p3 << "\n";

    point p4(p3);

    std::cout << p4 << "\n";

    std::cout << p3 << "\n";

    point p5(std::move(p4));

    std::cout << p5 << "\n";
    std::cout << p4 << "\n";

    return 0;
}