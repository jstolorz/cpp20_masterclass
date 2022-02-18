//
// Created by jstol on 16.02.2022.
//

#include "section30.h"

section30::section30(double m_x, double m_y) : m_x(m_x), m_y(m_y) {
    ++count;
}

int section30::count{10};

section30::~section30() {
   --count;
}
