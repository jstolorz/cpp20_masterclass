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

void print_cylinder(const cylinder& c){
   std::cout << " cylinder " << c.getHeight() << "\n";
}

int section() {

    print_cylinder(44.6);

    return 0;
}