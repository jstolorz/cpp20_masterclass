//
// Created by jstol on 16.02.2022.
//

#include "section30.h"

section30::section30(double m_x, double m_y) : m_x(m_x), m_y(m_y) {
    ++count;
}

int section30::count{10};
point point::m_origin{12.4,5.6};
const point point::c_m_origin{33.4,55.6};

section30::~section30() {
   --count;
}

point::point(double x, double y)
  : m_x(x),m_y(y),p_m_origin(nullptr)
{
}

void point::print_point_info(const point &p) {
    std::cout << "Point: [ m_x : " << p.m_x << ", m_y: " << p.m_y << " ]\n";
}


integer::integer(int inner_int) : inner_int(inner_int) {}

int integer::get_inner_int() const {
    return inner_int;
}

void integer::set_inner_int(int inner_int) {
    integer::inner_int = inner_int;
}
